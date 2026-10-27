/* Demonstrates call by value in the pointers topic. */


#include<stdio.h>
#include<conio.h>

int sum(int a , int b);

int main()
{
    int a = 6;
    int b = 8;

    printf("The value of a and b is %d and %d.\n" , a , b);
    printf("The sum of a and b is %d.\n" , sum(a , b));
    printf("The value of a and b is %d and %d.\n" , a , b);


    return 0;
}

int sum(int a , int b)
{
    int c;
    c = a + b;

    a = 68;
    b = 13;

    return c;

}