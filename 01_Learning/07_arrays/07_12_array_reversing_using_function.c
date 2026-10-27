/* Demonstrates array reversing using function in the arrays topic. */


#include<stdio.h>
#include<conio.h>

void reverse(int *array , int n);

int main()
{
    int array[] = {1 , 2 , 3 , 4 , 5 , 6 , 7};

    reverse (array , 7);

    for (int i=0; i<7; i++)
    {
        printf("The reverse value of %d is %d\n" , i+1 , array[i]);
    }
    

    return 0;
}

void reverse(int *array , int n)
{
    int temp;

    for (int i=0; i<(n/2); i++)
    {
        temp = array[i];
        array[i] = array[n-i-1];
        array[n-i-1] = temp;
    }
    
}