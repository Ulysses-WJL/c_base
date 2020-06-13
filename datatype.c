#include <stdio.h>

int main() {
    float f1 = 2.5, f2 = 3.5;
    int i1 = 1, i2 = 10;
    i1 = f1;
    f2 = i2 / i1;
    printf("float -> int %d \n", i1);
    printf("int / int give float %f \n",f2);


    printf("Hello, World!\n");
    printf("int 存储大小: %lu \n", sizeof(int));
    printf("short 存储大小: %lu \n", sizeof(short));
    printf("long 存储大小: %lu \n", sizeof(long));
    printf("char 存储大小: %lu \n", sizeof(char));
    // 双精度是1位符号，11位指数，52位小数
    printf("double 存储大小: %lu \n", sizeof(double));
    printf("long double 存储大小: %lu \n", sizeof(long double));
    // 1位符号，8位指数，23位小数。
    printf("float 存储大小 %d \n", sizeof(float));


    return 0;
}
