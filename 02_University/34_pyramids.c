
#include <stdio.h>

int main()
{
    int num, a = 1, b = 1;

    printf("\n\nPyramids without blank lines\n\n");
    printf("Enter the number of rows :");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int k = i; k <= num - 1; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= a; j++)
        {
            printf("*");
        }
        a = a + 2;
        printf("\n");
    }

    printf("\n\nPyramids with blank lines\n\n");
    printf("Enter the number of rows :");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            printf("\n");
            continue;
        }
        for (int j = i; j <= num - 1; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= b; k++)
        {
            printf("* ");
        }
        b = b + 2;
        printf("\n");
    }

    return 0;
}