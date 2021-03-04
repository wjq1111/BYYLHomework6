<center><span style="font-size:25px">编译原理大作业：实现编译器</span></center>

### 一、实验要求

- 实现编译器


### 二、实现思路

- 根据生成的语法树，逐个节点检查，生成对应的汇编代码到`test.s`文件中，编译`test.s`即可

### 三、实现

- 根据x86汇编代码生成规范，先进行常量的声明（如print的字符串，scanf的字符串，以及一些常量字符串），例如

  <img src="C:\Users\wujiq\AppData\Roaming\Typora\typora-user-images\image-20201222221134904.png" alt="image-20201222221134904" style="zoom:100%;" align="left"/>

- 然后main函数主体部分，

