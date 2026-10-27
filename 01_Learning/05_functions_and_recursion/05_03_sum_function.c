/* Demonstrates sum function in the functions and recursion topic. */


#include<stdio.h>
#include<conio.h>

int sum(int a , int b);

int main()
{
    int result;

    result = sum(5 , 3);

    printf("Result is %d.\n" , result);

    return 0;
}

int sum(int a , int b)
{
    int summation;
    summation = a + b;
    return summation;
}