#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n;
    int a;
    int sum = 0;

    printf("Enter a number : ");
    scanf("%d" , &n);
    printf("Enter a integers : ");
    scanf("%d" , &a);

    int b=n;

    for (int i = 1; i <= a; i++)
    {
        printf("%d " , n);
        sum = sum + n;
        n = (n*10)+b;
        
    }
    printf("\nSum of all numbers is %d" , sum);
    

    return 0;
}