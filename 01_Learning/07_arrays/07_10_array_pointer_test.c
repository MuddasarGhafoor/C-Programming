/* Demonstrates array pointer test in the arrays topic. */


#include<stdio.h>
#include<conio.h>

int main()
{
    int array[10];
    int *ptr = array;
    ptr = ptr + 2;

    if (ptr==&array[2])
    {
        printf("These point to the same location in the memory.\n");   
    }

    else
    {
        printf("These do not point to the same location in the memory.\n");   
    }
    
    

    return 0;
}