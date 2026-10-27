/* Demonstrates odd star lines in the functions and recursion topic. */


#include<stdio.h>
#include<conio.h>

void pattern(int n);

int main()
{
    int lines;

    printf("How many lines you want?\n");
    scanf("%d" , &lines);

    if (lines < 1)
    {
        printf("The number of lines must be positive.\n");
        return 1;
    }

    pattern(lines);

    return 0;
}

void pattern(int n)
{
    if (n <= 0)
    {
        return;
    }

    pattern(n-1);
    for (int i = 0; i < (2*n-1); i++)
    {
        printf("*");
    }
    printf("\n");
    
}
