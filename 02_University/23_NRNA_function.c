#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void func();

int main()
{
    func();

    return 0;
}

void func()
{
    int m = 6;
    int s = 8;

    printf("Sum of m and s is %d\n" , m+s);
}