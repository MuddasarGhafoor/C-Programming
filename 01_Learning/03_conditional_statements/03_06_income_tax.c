/* Demonstrates income tax in the conditional statements topic. */


#include<stdio.h>
#include<conio.h>

int main()
{
    int income;
    float tax=0;

    printf("Enter your income,\n");
    scanf("%d" , &income);

    if (income < 0)
    {
        printf("Income cannot be negative.\n");
        return 1;
    }

    if (income > 1000000)
    {
        tax = 0.05f * 250000
            + 0.20f * 500000
            + 0.30f * (income - 1000000);
    }
    else if (income > 500000)
    {
        tax = 0.05f * 250000
            + 0.20f * (income - 500000);
    }
    else if (income > 250000)
    {
        tax = 0.05f * (income - 250000);
    }

    printf("Your net income tax is %f.\n" , tax);

    return 0;
}
