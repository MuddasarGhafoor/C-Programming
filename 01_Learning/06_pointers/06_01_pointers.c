/* Demonstrates pointers in the pointers topic. */


#include<stdio.h>
#include<conio.h>

int main()
{
    int i=8;
    int *j=&i;

    printf("The value of i is %d.\n" , i); 
    printf("The value of i is %d.\n" , *j); 
    printf("The address stored in j is %p.\n" , (void *)j); 
    printf("The address of i is %p.\n" , (void *)&i); 
    printf("The address of i is %p.\n" , (void *)j); 
    printf("The address of j is %p.\n" , (void *)&j); 

    return 0;
}
