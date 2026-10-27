#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int number;
    char choice = 'y';

    while (choice == 'y')
    {

    printf("\nEnter a number whose table you want : ");
    scanf("%d" , &number);

        printf("\n**************************\n\n");
        for (int i = 1; i <= 10; i++)
        {
            printf("%d  X  %d  =  %d\n" , number , i , (number*i));
        }
        printf("\n**************************\n\n");

        printf("Enter 'y' if you want to continue : ");
        choice = getche();
    }

    return 0;
}