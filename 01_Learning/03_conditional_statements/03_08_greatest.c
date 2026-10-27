/* Demonstrates greatest in the conditional statements topic. */


#include<stdio.h>
#include<conio.h>

int main()
{
    int number_1;
    int number_2;
    int number_3;
    int number_4;
    int greatest;

    printf("Enter the first number.\n");
    scanf("%d" , &number_1);

    printf("Enter the second number.\n");
    scanf("%d" , &number_2);

    printf("Enter the third number.\n");
    scanf("%d" , &number_3);

    printf("Enter the fourth number.\n");
    scanf("%d" , &number_4);

    greatest = number_1;

    if (number_2 > greatest)
        greatest = number_2;
    if (number_3 > greatest)
        greatest = number_3;
    if (number_4 > greatest)
        greatest = number_4;

    printf("%d is the greatest.\n" , greatest);
    

    return 0;
}
