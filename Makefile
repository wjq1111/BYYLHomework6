.PHONY: all run clean test rerun asm test1
all: bison flex g++
bison:
	bison -o main.tab.cc -d main.y
flex:
	flex -o lex.yy.cc main.l
g++:
	g++ $(shell ls *.cc *.cpp) -o main.out
test1:
	./main.out < test.c > test.s
	gcc test.s -m32 -o test.out
	qemu-i386 test.out < testin.txt > testout.txt
test:
	for file in $(basename $(shell find test1/*.c));\
	do \
		./main.out < $$file.c > $$file.s; \
		gcc $$file.s -m32 -o $$file.out; \
		qemu-i386 $$file.out < $$file.in > $$file.txt; \
		$(if diff -c $$file.txt $$file.stdout, echo $$file.c:success); \
	done
rerun: cleantest all test
reasm: clean all test1

stdout:
	for file in $(basename $(shell find test1/*.c)); \
	do \
		gcc $$file.c -o $$file.out; \
		./$$file.out < $$file.in > $$file.stdout; \
	done

cleantest:
	rm -f test1/*.out test1/*.s test1/*.txt
asm:
	gcc -S test.c -o test0.s
out:
	gcc -c test.s -o test
run:
	for file in $(basename $(shell find test/*.c)); \
	do \
		./main.out <$$file.c >$$file.res; \
	done
clean:
	rm -f test.s testout.txt *.output *.yy.* *.tab.* *.out *.res test/*.res