//
// Created by ulysses on 2020/6/13.
//

#include <stdio.h>

// 它不能定义常量 不为宏名分配内存
#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'
/*********************
(1) 编译器处理方式不同

#define 宏是在预处理阶段展开。
 const 常量是编译运行阶段使用。
(2) 类型和安全检查不同

 #define 宏没有类型，不做任何类型检查，仅仅是展开。
 const 常量有具体的类型，在编译阶段会执行类型检查。
(3) 存储方式不同
#define宏仅仅是展开，有多少地方使用，就展开多少次，不会分配内存。（宏定义不分配内存，变量定义分配内存。）
const常量会在内存中分配(可以是堆中也可以是栈中)。

(4) const 可以节省空间，避免不必要的内存分配
#define NUM 3.14159 //常量宏
const doulbe Num = 3.14159; //此时并未将Pi放入ROM中 ......
double i = Num; //此时为Pi分配内存，以后不再分配！
double I= NUM; //编译期间进行宏替换，分配内存
double j = Num; //没有内存分配
double J = NUM; //再进行宏替换，又一次分配内存！
(5) 提高了效率。 编译器通常不为普通const常量分配存储空间，而是将它们保存在符号表中，这使得它成为一个编译期间的常量，
 没有了存储与读内存的操作，使得它的效率也很高。

(6) 宏替换只作替换，不做计算，不做表达式求解;
  宏预编译时就替换了，程序运行时，并不分配内存。
 **********************/
int main()
{
    // 改变一个变量的存储类，把该变量所占的内存变为只读
    // const 定义的是变量不是常量，只是这个变量的值不允许改变是常变量
//    const int  LENGTH = 10;
//    const int  WIDTH  = 5;
//    const char NEWLINE = '\n';
    int area;

    area = LENGTH * WIDTH;
    printf("value of area : %d", area);
    printf("%c", NEWLINE);

    return 0;
}