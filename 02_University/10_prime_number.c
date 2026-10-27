#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char choice = 'y';
    while (choice == 'y')
    {
        int number;
        int prime = 1;

        printf("\nEnter a number to check wheather it is prime or not : ");
        scanf("%d" , &number);

        for (int i = 2; i < number; i++)
            {
                if (number % i == 0)
                {
                    prime = 0;
                    break;
                }
            }
            if (prime == 0 || number == 1)
            {
                printf("%d is not a prime number.\n" , number);
            }

            else
            {
                printf("%d is a prime number.\n" , number);
            }

        printf("Enter 'y' if you want to continue : ");
        choice = getche();
    }

    return 0;
}