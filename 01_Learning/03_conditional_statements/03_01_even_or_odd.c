/* Demonstrates even or odd in the conditional statements topic. */


#include<stdio.h>
#include<conio.h>

int main()
{
    int a;

    printf("Enter the number.\n");
    scanf("%d" , &a);

    if (a%2==0){
        printf("%d is even.\n" , a);
    }

    else {
        printf("%d is odd.\n" , a);
    }

    return 0;
}