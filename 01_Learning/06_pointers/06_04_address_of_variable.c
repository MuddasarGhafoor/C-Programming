/* Demonstrates address of variable in the pointers topic. */


#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 8;

    int *ptr;
    ptr = &a;

    printf("The address of variable a is %p.\n" , (void *)&a);
    printf("The address of variable a is %p.\n" , (void *)ptr);

    printf("The value of variable a is %d.\n" , a);
    printf("The value of variable a is %d.\n" , *ptr);

    return 0;
}
