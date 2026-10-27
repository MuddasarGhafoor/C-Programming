/* Demonstrates arrays with pointers in the arrays topic. */


#include<stdio.h>
#include<conio.h>

int main()
{
    int age[4];

    int *ptr_age;
    ptr_age = &age[0];
    // ptr_age = age;  // Can also be used.

    for (int i=0; i<4; i++)
    {
        printf("Enter the age of boy %d.\n" , i+1);
        scanf("%d" , ptr_age);
        ptr_age++;
    }

    for (int i=0; i<4; i++)
    {
        printf("The age of %d boy is %d.\n" , i+1 , age[i]);
    }
    

    return 0;
}