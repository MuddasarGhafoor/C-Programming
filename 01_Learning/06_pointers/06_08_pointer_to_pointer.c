/* Demonstrates pointer to pointer in the pointers topic. */


#include<stdio.h>
#include<conio.h>

int main()
{
    int m = 13;

    int *ptr;
    ptr = &m;

    int **ptr_ptr;
    ptr_ptr = &ptr;

    printf("The value of the variable is %d.\n" , **ptr_ptr);

    return 0;
}