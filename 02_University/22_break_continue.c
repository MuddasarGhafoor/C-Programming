#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i%2==0)
        {
            break;
        }
        printf("%d  " , i);
    }

    printf("\n\n");

    for (int j = 1; j <= 5; j++)
    {
        if (j%2==0)
        {
            continue;
        }
        printf("%d  " , j);
    }
    

    return 0;
}