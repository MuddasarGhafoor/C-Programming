/* Demonstrates array initialization in the arrays topic. */


#include<stdio.h>
#include<conio.h>

int main()
{
    int a[] = {6 , 8 , 13};

    printf("The value of a[0] is %d.\n" , a[0]);
    printf("The value of a[1] is %d.\n" , a[1]);
    printf("The value of a[2] is %d.\n" , a[2]);

    printf("\n");

    float b[] = {68.13 , 28.08 , 20.5};

    printf("The value of b[0] is %.2f.\n" , b[0]);
    printf("The value of b[1] is %.2f.\n" , b[1]);
    printf("The value of b[2] is %.2f.\n" , b[2]);


    printf("\n");

    char c[] = {'M' , 'H' , 'S'};

    printf("The value of c[0] is %c.\n" , c[0]);
    printf("The value of c[1] is %c.\n" , c[1]);
    printf("The value of c[2] is %c.\n" , c[2]);

    return 0;
}