//
// Created by ulysses on 2020/6/13.
//
#include <stdio.h>

extern int count1;

void write_extern(void)
{
    printf("count1 is %d\n", count1);
}
