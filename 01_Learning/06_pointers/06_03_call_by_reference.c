/* Demonstrates call by reference in the pointers topic. */


#include<stdio.h>
#include<conio.h>

void wrong_swap(int a , int b);
void swap(int *a , int *b);

int main()
{
    int x = 5;
    int y = 11;

    printf("\n");

    printf("The value of x and y before wrong_swap is %d and %d.\n" , x , y);
    wrong_swap(x , y);       // Will not work due to call by value.
    printf("The value of x and y after wrong_swap is %d and %d.\n" , x , y);

    printf("\n");

    printf("The value of x and y before swap is %d and %d.\n" , x , y);
    swap(&x , &y);           // Works because the variables' addresses are passed.
    printf("The value of x and y after swap is %d and %d.\n" , x , y);
    
    printf("\n");

    return 0;
}

void wrong_swap(int a , int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap(int *a , int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
