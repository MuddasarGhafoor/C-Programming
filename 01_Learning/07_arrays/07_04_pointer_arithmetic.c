/* Demonstrates pointer arithmetic in the arrays topic. */


#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 8;
    int *ptr_i;
    ptr_i = &i;

    printf("The value of ptr_i is %p.\n" , (void *)ptr_i);
    ptr_i++;     //  ptr_i-- can also be done.
    printf("The value of ptr_i is %p.\n" , (void *)ptr_i);
    printf("\n");


    float f = 2.8;
    float *ptr_f;
    ptr_f = &f;

    printf("The value of ptr_f is %p.\n" , (void *)ptr_f);
    ptr_f++;      //  ptr_f-- can also be done.
    printf("The value of ptr_f is %p.\n" , (void *)ptr_f);
    printf("\n");


    char c = 'S';
    char *ptr_c;
    ptr_c = &c;

    printf("The value of ptr_c is %p.\n" , (void *)ptr_c);
    ptr_c++;      //  ptr_c-- can also be done.
    printf("The value of ptr_c is %p.\n" , (void *)ptr_c);
    printf("\n");

    return 0;
}
