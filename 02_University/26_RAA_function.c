#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int func(int a , int b);

int main()
{
    int m = 6;
    int s = 8;
    int result;

    result = func(6 , 8);

    printf("Sum of m and s is %d\n" , result);

    return 0;
}

int func(int a , int b)
{
    int sum = a+b;

    return sum;
}