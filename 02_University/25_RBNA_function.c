#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int func();

int main()
{
    int result;

    result = func();

    printf("Sum of m and s is %d\n" , result);

    return 0;
}

int func()
{
    int m = 6;
    int s = 8;
    int sum = m+s;

    return sum;
}