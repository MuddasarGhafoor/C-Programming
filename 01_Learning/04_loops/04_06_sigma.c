/* Demonstrates sigma in the loops topic. */


#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    int sum = 0;

    printf("Enter the last number to sum.\n");
    scanf("%d" , &n);

    for (int i = 0; i <= n; i++)
        sum += i;
    {
        printf("Sum of numbers from 0 to %d is %d.\n" , n , sum);
    }
    

    return 0;
}