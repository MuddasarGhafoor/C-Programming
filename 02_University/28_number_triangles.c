#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    printf("\n\n");

    int n;

    printf("Enter Number of Rows : ");
    scanf("%d" , &n);
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf("%d " , i);
        }
        for (int k = 1; k <= i; k++)
        {
            printf("    ");
        }
        for (int j = i; j <= n; j++)
        {
            printf("%d " , i);
        }

        printf("\n");
    }

    printf("\n\n");

    return 0;
}
