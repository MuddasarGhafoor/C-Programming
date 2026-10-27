/* Demonstrates grading in the conditional statements topic. */


#include<stdio.h>
#include<conio.h>

int main()
{
    int number;

    printf("Enter your number(1-100).\n");
    scanf("%d" , &number);

    if (number>=90 && number<=100)
    {
        printf("Your grade is A.\n");
    }

    else if (number>=80 && number<=89)
    {
        printf("Your grade is B.\n");
    }

    else if (number>=70 && number<=79)
    {
        printf("Your grade is C.\n");
    }

    else if (number>=60 && number<=69)
    {
        printf("Your grade is D.\n");
    }

    else if (number>=50 && number<=59)
    {
        printf("Your grade is E.\n");
    }

    else if (number>=0 && number<=49)
    {
        printf("You are fail.\n");
    }

    else
    {
        printf("Wrong numbers!!\n");
    }

    
    return 0;
}
