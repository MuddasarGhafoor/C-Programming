#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char choice = 'y';

    while (choice == 'y')
    {
        printf("\n");

        int rows;
        int s_num;

        printf("Enter number of rows : ");
        scanf("%d" , &rows);
        printf("Enter number of stars in each line : ");
        scanf("%d" , &s_num);

        printf("\n");

        for (int i = 1; i <= rows; i++)
        {
            
            for (int j = 1; j <= s_num; j++)
            {
                if (i > 1 && i < rows && j > 1 && j < s_num)
                {
                    printf("  ");
                    continue;
                }
                printf("* ");
            }
            
            printf("\n");
        }

        printf("\n");

        printf("Enter 'y' if you want to continue : ");
        choice = getche();
        
        printf("\n");
    }

    return 0;
}