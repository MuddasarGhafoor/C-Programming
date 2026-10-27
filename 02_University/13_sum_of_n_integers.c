#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int number;
    int sum = 0;

    do
    {
        printf("Enter a number : ");
        scanf("%d" , &number);
        if (number > 0)
        {
            // sum += number;
            sum = sum + number;
        }
        
    } while (number != 0);

    printf("Sum of all numbers is %d.\n" , sum);
    

    return 0;
}
