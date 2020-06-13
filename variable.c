//
// Created by ulysses on 2020/6/13.
//
#include <stdio.h>

// 变量定义：用于为变量分配存储空间，还可为变量指定初始值。程序中，变量有且仅有一个定义。
// 变量声明：用于向程序表明变量的类型和名字。.定义也是声明，extern 声明不是定义。
// 定义分配存储空间，而声明不会。
int d = 3, f = 5;           // 定义并初始化 d 和 f

char x = 'x';               // 变量 x 的值为 'x'

extern int a;     // 声明一个全局变量 a

int a;            // 定义一个全局变量 a

extern int a =0;  // 定义一个全局变量 a 并给初值。一旦给予赋值，一定是定义，定义才会分配存储空间

//int a =0;         //定义一个全局变量 a，并给初值

int add_two_num()
{
    // 函数内声明变量 x 和 y 为外部变量
    extern int d;
    extern int f;
    // 给外部变量（全局变量）x 和 y 赋值
    d = 1;
    f = 2;
    return d+f;
}

int main()
{
    int result;
    // 调用函数 addtwonum
    result = add_two_num();

    printf("result 为: %d \n",result);
    return 0;
}