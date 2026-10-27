/* Demonstrates recursive summation in the functions and recursion topic. */


#include<stdio.h>
#include<conio.h>

int summation(int n);

int main()
{
    int a;

    printf("Enter any number up to which you want summation.\n");
    scanf("%d" , &a);

    if (a < 0)
    {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    printf("Sigma of numbers from 1 to %d is %d.\n" , a , summation(a));

    return 0;
}

int summation(int n)
{
    if (n <= 0)
    {
        return 0;
    }

    return n + summation(n-1);
}
