/* Demonstrates table in the loops topic. */


#include<stdio.h>
#include<conio.h>

int main()
{
    int t;

    printf("Enter the number whose table you wants.\n");
    scanf("%d" , &t);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d  X   %d  =   %d\n" , t , i , t*i);
    }
    

    return 0;
}