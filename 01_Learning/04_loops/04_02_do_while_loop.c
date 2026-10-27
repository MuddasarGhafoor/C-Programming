/* Demonstrates do while loop in the loops topic. */


#include<stdio.h>
#include<conio.h>

int main()
{
    int a=0;
    int n;
    
    printf("Put the value of n.\n");
    scanf("%d" , &n);

    do
    {
        printf("The value of a is %d.\n" , a+1);
        a++;
    } while (a<n);
    

    return 0;
}