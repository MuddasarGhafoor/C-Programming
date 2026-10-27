#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void func(int a , int b);

int main()
{
    int m = 6;
    int s = 8;

    func(6 , 8);

    return 0;
}

void func(int a , int b)
{
    printf("Sum of m and s is %d\n" , a+b);
}