#include<stdio.h>
#include<conio.h>

int main()
{
    int number;

    printf("Enter any number.\n");
    scanf("%d" , &number);

    if (number < 1)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (int i = number; i >= 1; i--)
    {
        printf("%d\t" , i);
    }

    return 0;
}
