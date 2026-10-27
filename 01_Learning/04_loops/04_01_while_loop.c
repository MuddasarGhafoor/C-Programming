/* Demonstrates while loop in the loops topic. */


#include<stdio.h>
#include<conio.h>

int main()
{
    int a;

    printf("Put the value of a.\n");
    scanf("%d" , &a);

    while (a<=8)
    {
        printf("%d\n" , a);
        a++;   
    }
    
    return 0;
}