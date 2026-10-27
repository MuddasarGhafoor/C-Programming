#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int a;
    printf("Enter number of rows : ");
    scanf("%d" , &a);

    printf("\n");

    for (int i = 1; i <= a; i++)
    {
        for (int k = i; k <= a+1; k++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i-1; j++)
        {
            printf("*   ");
        }
        printf("\n");
    }
    for (int i = a; i >= 1; i--)
    {
        for (int k = i; k <= a; k++)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*   ");
        }
        printf("\n");
    }

    printf("\n");
    
    return 0;
}