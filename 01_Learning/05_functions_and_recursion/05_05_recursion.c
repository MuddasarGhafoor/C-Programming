/* Demonstrates recursion in the functions and recursion topic. */


#include<stdio.h>
#include<conio.h>

int factorial(int x);

int main()
{
    int a;

    printf("Enter any integer whose factorial you wants : ");
    scanf("%d" , &a);

    printf("The factorial of %d is %d.\n" , a , factorial(a));

    return 0;
}

int factorial(int x)
{
    if (x==0 || x==1)
    {
        return 1;
    }
    else
    {
        return x * factorial(x-1);
    }
}