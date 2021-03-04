%{
    #include "common.h"
    #include <iostream>
    using namespace std;
    extern Node * root;
    int yylex();
    extern int yyparse();
    int yyerror(char const * );
    extern block b[100];
    extern curblock cb;
    extern int blockindex;
    extern int forflag;
    extern int IfLevel;
    extern int WhileLevel;
    extern int ForLevel;
    extern vector<string> forvariable[100];
	extern vector<string> printfTable;
	extern vector<string> scanfTable;
	extern vector<string> warnings;
%}
%defines
%start Program
%token Printf Scanf
%token If Else While For
%token Return
%token Id Idadd
%token Integer
%token Int Char
%token Semicolon
%token True False

%token Comma
%token ModEqual Assign AddEqual SubEqual MulEqual DivEqual
%token Or
%token And
%token OrBit
%token AndBit
%token Equal NotEqual
%token Big BigEqual Small SmallEqual 
%token Add Sub
%token Mul Div Mod
%token Not AddAdd SubSub
%token LParen RParen LBrace RBrace
%token Void Main Const Intt

%token Quote String


%token Cmtbegin1 CmtElement1 Cmtend1
%token Cmtbegin2 CmtElement2 Cmtend2


%left Comma
%right ModEqual Assign AddEqual SubEqual MulEqual DivEqual
%left Or
%left And
%left OrBit
%left AndBit
%left Equal NotEqual
%left Big BigEqual Small SmallEqual 
%left Add Sub
%left Mul Div Mod
%right Not UMINUS AddAdd SubSub
%left LParen RParen LBrace RBrace
%left Id IntegerDec IntegerOct IntegerHex If While For Return Printf Scanf Int Char Void Main Semicolon Const Cha STR String
%nonassoc Lower_than_else
%nonassoc Else
%%

Program
	: Statements {
		root = new Node(Node_Program);
		root->addchild($1);
	}
	;

Statements
	: Statement { $$ = $1; }
	| Statements Statement {
		$1->addsibling($2);
		$$ = $1;
	}
	;

Statement
    : Instruction{ $$ = $1;}
    | Expression Semicolon{ $$ = $1; $1->typecheck($1);}
    | Type Main LParen RParen Statements { $$ = $5; }
    | If_Else { $$ = $1; }
    | Whilee { $$ = $1; }
    | Forr { $$ = $1; }
    | LBrace Statements RBrace { $$ = $2; }
    | printf { $$ = $1; }
    | scanf { $$ = $1; }
    | return { $$ = $1; }
    ;

If_Else
	: If Bool_Statement Statements %prec Lower_than_else{
		Node *node = new Node(Node_Stmt);
		node->stmttype = Stmt_If;
		$2->addsibling($3);
		node->addchild($2);
		node->iflevel = IfLevel;
		IfLevel++;
		$$ = node;
	}
	| If Bool_Statement Statements Else Statements{
		Node *node = new Node(Node_Stmt);
		node->stmttype = Stmt_If;
		$2->addsibling($3);
		$3->addsibling($4);
		$4->addsibling($5);
		node->addchild($2);
		node->iflevel = IfLevel;
		IfLevel++;
		$$ = node;
	}
	;
Whilee
    : While Bool_Statement Statements {
        Node *node = new Node(Node_Stmt);
        node->stmttype = Stmt_While;
        $2->addsibling($3);
        node->addchild($2);
        node->whilelevel = WhileLevel;
        WhileLevel++;
        $$ = node;
    }
    ;
Forr
	: For For_Statement Statements {
		Node *node = new Node(Node_Stmt);
        node->stmttype = Stmt_For;
        $2->addsibling($3);
        node->addchild($2);
        forflag--;
        node->forlevel = ForLevel;
        ForLevel++;
        $$ = node;
	}
	;
For_Statement
	: LParen For_Expression RParen { $$ = $2; }
	;
For_Expression
	: For_Instruction Bool_Expression Semicolon Expression {
		$4->typecheck($4);
		$1->addsibling($2);
		$1->addsibling($4);
		$$ = $1;
	}
	;
For_Instruction
    : Type For_Declarations Semicolon{
    	Node *node = new Node(Node_Stmt);
        node->stmttype = Stmt_Declare;
        $1->addsibling($2);
        node->addchild($1);
        $$ = node;
    }
    | For_Assignments Semicolon{
        Node *node = new Node(Node_Stmt);
        node->stmttype = Stmt_Assign;
        node->addchild($1);
        $$ = node;
    }
    ;
For_Declarations
	: For_Declaration { $$ = $1; }
	| For_Declarations Comma For_Declaration {
		$1->addsibling($3);
		$$ = $1;
	}
	;
For_Declaration
	: Id Assign Expression{
		$3->typecheck($3);
		forvariable[forflag].push_back($1->str_val);
    	cb.id.push_back($1->str_val);
		$1->addchild($3);
		$$ = $1;
	}
	| Id {
		forvariable[forflag].push_back($1->str_val);
    	cb.id.push_back($1->str_val);
		$$ = $1;
	}
	;
For_Assignments
	: For_Assignment { $$ = $1; }
	| For_Assignments Comma For_Assignment {
		$1->addsibling($3);
		$$ = $1;
	}
	;
For_Assignment
	: Id Assign Expression{
		$3->typecheck($3);
		$1->addchild($3);
		$$ = $1;
	}
	;
Bool_Statement
    : LParen Bool_Expression RParen { $$ = $2; }
    ;

Bool_Expression
	: True { $$ = $1; }
	| False { $$ = $1; }
	| Expression {
		$1->typecheck($1);
		$$ = $1; 
	}
	;
Declarations
	: Declaration { $$ = $1; }
	| Declarations Comma Declaration {
		$1->addsibling($3);
		$$ = $1;
	}
	;
Declaration
	: Id Assign Expression{
		for(int i = b[blockindex].id.size(); i < cb.id.size(); i++)
		{
			if(cb.id[i] == $1->str_val)
			{
				cerr << "Error: Multiple Definition of " << $1->str_val << "." << endl;
				exit(1);
			}
		}
		$3->typecheck($3);
    	cb.id.push_back($1->str_val);
		$1->addchild($3);
		$$ = $1;
	}
	| Id {
		for(int i = b[blockindex].id.size(); i < cb.id.size(); i++)
		{
			if(cb.id[i] == $1->str_val)
			{
				cerr << "Error: Multiple Definition of " << $1->str_val << "." << endl;
				exit(1);
			}
		}
    	cb.id.push_back($1->str_val);
		$$ = $1;
	}
	;
Assignments
	: Assignment { $$ = $1; }
	| Assignments Comma Assignment {
		$1->addsibling($3);
		$$ = $1;
	}
	;
Assignment
	: Id Assign Expression{
		$3->typecheck($3);
		$1->addchild($3);
		$$ = $1;
	}
	;
Instruction
    : Type Declarations Semicolon{
    	Node *node = new Node(Node_Stmt);
        node->stmttype = Stmt_Declare;
        $1->addsibling($2);
        node->addchild($1);
        $$ = node;
    }
    | Assignments Semicolon{
        Node *node = new Node(Node_Stmt);
        node->stmttype = Stmt_Assign;
        node->addchild($1);
        $$ = node;
    }
    ;

PrintfArgs
	: PrintfArg { $$ = $1; }
	| PrintfArgs Comma PrintfArg {
		$1->addsibling($3);
		$$ = $1;
	}
	;
PrintfArg
	: Expression {
		$$ = $1;
	}
	;

printf
    : Printf LParen String RParen Semicolon{
        Node *node = new Node(Node_Stmt);
        node->stmttype = Stmt_Printf;
        node->addchild($3);
        $$ = node;
        printfTable.push_back($3->str_val);
    }
    | Printf LParen String Comma PrintfArgs RParen Semicolon{
    	Node *node = new Node(Node_Stmt);
        node->stmttype = Stmt_Printf;
        $3->addchild($5);
        node->addchild($3);
        $$ = node;
        printfTable.push_back($3->str_val);
    }
    ;

ScanfArgs
	: ScanfArg { $$ = $1; }
	| ScanfArgs Comma ScanfArg {
		$1->addsibling($3);
		$$ = $1;
	}
	;
ScanfArg
	: Idadd {
		$$ = $1;
	}
	;
scanf
    : Scanf LParen String Comma ScanfArgs RParen Semicolon{
        Node *node = new Node(Node_Stmt);
        node->stmttype = Stmt_Scanf;
        $3->addsibling($5);
        node->addchild($3);
        $$ = node;
        scanfTable.push_back($3->str_val);
    }
    ;

return
	: Return Expression Semicolon {
		Node *node = new Node(Node_Stmt);
		node->stmttype = Stmt_Return;
		node->addchild($2);
		$$ = node;
	}
	;
Expression
	: Id {
		$$ = $1;
	}
	| IntegerDec {
		$$ = $1;
	}
	| IntegerOct {
		$$ = $1;
	}
	| IntegerHex {
		$$ = $1;
	}
	| Cha {
		$$ = $1;
	}
	| String {
		$$ = $1;
	}
	| Expression Assign Expression{
		int flag = 0;
		for(int i = 0; i < cb.id.size(); i++)
		{
			if(cb.id[i] == $1->str_val)
			{
				flag = 1;
				break;
			}
		}
		if(!flag)
		{
			cerr << "Error: No Declaration of " << $1->str_val << "." << endl;
			exit(1);
		}
		$3->typecheck($3);
		Node *node = new Node(Node_Stmt);
		node->stmttype = Stmt_Assign;
		node->createleftchild($1);
		node->createrightchild($3);
		$$ = node;
	}
	| Expression Add Expression{
		Node *node = new Node(Node_Operator);
		node->optype = Op_Add;
		node->createleftchild($1);
		node->createrightchild($3);
		$$ = node;
	}
	| Expression Sub Expression{
		Node *node = new Node(Node_Operator);
		node->optype = Op_Sub;
		node->createleftchild($1);
		node->createrightchild($3);
		$$ = node;
	}
	| Expression Mul Expression{
		Node *node = new Node(Node_Operator);
		node->optype = Op_Mul;
		node->createleftchild($1);
		node->createrightchild($3);
		$$ = node;
	}
	| Expression Div Expression{
		Node *node = new Node(Node_Operator);
		node->optype = Op_Div;
		node->createleftchild($1);
		node->createrightchild($3);
		$$ = node;
	}
	| Expression AddEqual Expression{
		Node *node = new Node(Node_Operator);
		node->optype = Op_AddEqual;
		node->createleftchild($1);
		node->createrightchild($3);
		$$ = node;
	}
	| Expression SubEqual Expression{
		Node *node = new Node(Node_Operator);
		node->optype = Op_SubEqual;
		node->createleftchild($1);
		node->createrightchild($3);
		$$ = node;
	}
	| Expression MulEqual Expression{
		Node *node = new Node(Node_Operator);
		node->optype = Op_MulEqual;
		node->createleftchild($1);
		node->createrightchild($3);
		$$ = node;
	}
	| Expression DivEqual Expression{
		Node *node = new Node(Node_Operator);
		node->optype = Op_DivEqual;
		node->createleftchild($1);
		node->createrightchild($3);
		$$ = node;
	}
	| Expression Mod Expression{
		Node *node = new Node(Node_Operator);
		node->optype = Op_Mod;
		node->createleftchild($1);
		node->createrightchild($3);
		$$ = node;
	}
	| Expression AddAdd{
		Node *node = new Node(Node_Operator);
		node->optype = Op_AddAdd;
		node->addchild($1);
		$$ = node;
	}
	| Expression SubSub{
		Node *node = new Node(Node_Operator);
		node->optype = Op_SubSub;
		node->addchild($1);
		$$ = node;
	}
	| Sub Expression %prec UMINUS{
		Node *node = new Node(Node_Operator);
		node->optype = Op_UMINUS;
		node->createleftchild($2);
		$$ = node;
	}
	| Expression AndBit Expression{
		Node *node = new Node(Node_Operator);
		node->optype = Op_AndBit;
		node->createleftchild($1);
		node->createrightchild($3);
		$$ = node;
	}
	| Expression OrBit Expression{
		Node *node = new Node(Node_Operator);
		node->optype = Op_OrBit;
		node->createleftchild($1);
		node->createrightchild($3);
		$$ = node;
	}
	| Expression Equal Expression {
        Node *node = new Node(Node_Operator);
        node->optype = Op_Equal;
        node->createleftchild($1);
		node->createrightchild($3);
        $$ = node;
    }
    | Expression NotEqual Expression {
        Node *node = new Node(Node_Operator);
        node->optype = Op_NotEqual;
        node->createleftchild($1);
		node->createrightchild($3);
        $$ = node;
    }
    | Expression And Expression {
    	Node *node = new Node(Node_Operator);
        node->optype = Op_And;
        node->createleftchild($1);
		node->createrightchild($3);
        $$ = node;
    }
    | Expression Or Expression {
    	Node *node = new Node(Node_Operator);
        node->optype = Op_Or;
        node->createleftchild($1);
		node->createrightchild($3);
        $$ = node;
    }
    | Expression Big Expression{
		Node *node = new Node(Node_Operator);
		node->optype = Op_Big;
		node->createleftchild($1);
		node->createrightchild($3);
		$$ = node;
	}
	| Expression Small Expression{
		Node *node = new Node(Node_Operator);
		node->optype = Op_Small;
		node->createleftchild($1);
		node->createrightchild($3);
		$$ = node;
	}
	| Expression BigEqual Expression{
		Node *node = new Node(Node_Operator);
		node->optype = Op_BigEqual;
		node->createleftchild($1);
		node->createrightchild($3);
		$$ = node;
	}
	| Expression SmallEqual Expression{
		Node *node = new Node(Node_Operator);
		node->optype = Op_SmallEqual;
		node->createleftchild($1);
		node->createrightchild($3);
		$$ = node;
	}
    | LParen Expression RParen{
        $$ = $2;        
    }
	| Not Expression{
		Node *node = new Node(Node_Operator);
		node->optype = Op_Not;
		node->addchild($2);
		$$ = node;
	}
	;

Type
	: Int {
		Node *node = new Node(Node_Type);
		node->tytype = Type_Int;
		$$ = node;
	}
	| Char {
		Node *node = new Node(Node_Type);
		node->tytype = Type_Char;
		$$ = node;
	}
	| Const Int {
		Node *node = new Node(Node_Type);
		node->tytype = Type_ConstInt;
		$$ = node;
	}
	| Const Char {
		Node *node = new Node(Node_Type);
		node->tytype = Type_ConstChar;
		$$ = node;
	}
	| STR {
		Node *node = new Node(Node_Type);
		node->tytype = Type_String;
		$$ = node;
	}
	;


%%
