#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int number;

    printf("Enter a number to check wheather it is even or odd : ");
    scanf("%d" , &number);

    if (number%2 == 0)
    {
        printf("%d is even." , number);
    }
    else if (number%2 == 1)
    {
        printf("%d is odd." , number);
    }
    

    return 0;
}