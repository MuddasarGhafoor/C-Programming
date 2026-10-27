/* Demonstrates array storing multiplication table in the arrays topic. */


#include<stdio.h>
#include<conio.h>

int main()
{
    int n;

    printf("Enter the digit whose multiplication you want.\n");
    scanf("%d" , &n);

    int mul[10];

    for (int i=0; i<10; i++)
    {
        mul[i] = n * (i+1);
    }

    for (int i=0; i<10; i++)
    {
        printf("%d X %d = %d\n" , n , i+1 , mul[i]);
    }
    

    return 0;
}