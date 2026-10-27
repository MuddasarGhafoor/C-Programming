/* Demonstrates increase value using function in the pointers topic. */


#include<stdio.h>
#include<conio.h>

void increaser(int *a);

int main()
{
    int val = 8;
    printf("The value of variable before increasing is %d.\n" , val);

    increaser(&val);

    printf("The value of variable after increasing is %d.\n" , val);
    return 0;
}

void increaser(int *a)
{
    *a = 11 * (*a);
}
