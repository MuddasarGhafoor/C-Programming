/* Demonstrates arrays to functions in the arrays topic. */


#include<stdio.h>
#include<conio.h>

void array(int ptr[] , int n);

int main()
{
    int ar[] = {6 , 8 , 13 , 28};

    array(ar , 4);

    return 0;
}

void array(int ptr[] , int n)
{
    for (int i=0; i<n; i++)
    {
        printf("The value of element %d is %d.\n" , i+1 , ptr[i]);
    }
    
}


        // Following method can also be used.

// void array(int *ptr , int n);

// void array(int *ptr , int n)
// {
//     for (int i=0; i<n; i++)
//     {
//         printf("The value of element %d is %d.\n" , i+1 , *(ptr+i));
//     }
    
// }