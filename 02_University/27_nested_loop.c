#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    
    printf("\n");

    for (int i = 1; i <= 5; i++)
    {
        
        for (int j = 1; j <= 4; j++)
        {
            if (i==4)
            {
                continue;
            }
            printf("*");
        }
        
        printf("\n");
    }

    printf("\n");

    return 0;
}