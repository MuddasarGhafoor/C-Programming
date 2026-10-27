/* Counts positive integers entered into an array. */


#include<stdio.h>

int main()
{
    int values[10];
    int positive_count = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter integer %d: " , i+1);
        scanf("%d" , &values[i]);

        if (values[i] > 0)
        {
            positive_count++;
        }
    }

    printf("Positive integers: %d\n" , positive_count);

    return 0;
}
