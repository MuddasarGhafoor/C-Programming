/* Demonstrates factorial in the loops topic. */


#include<stdio.h>
#include<conio.h>

int main()
{
    int number;
    int factorial = 1;

    printf("Enter the number whose factorial you want.\n");
    scanf("%d" , &number);

    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }

    printf("Factorial of number %d is %d.\n" , number , factorial);
    
    return 0;
}