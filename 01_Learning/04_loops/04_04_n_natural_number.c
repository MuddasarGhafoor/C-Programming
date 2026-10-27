/* Demonstrates n natural number in the loops topic. */


#include<stdio.h>
#include<conio.h>

int main()
{
    int n;

    printf("Enter the value of n.\n");
    scanf("%d" , &n);

    if (n < 1)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++)
    {
        printf("The value of i is %d.\n" , i);
    }
    

    return 0;
}
