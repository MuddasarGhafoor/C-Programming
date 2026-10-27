/* Demonstrates array input using loops in the arrays topic. */


#include<stdio.h>
#include<conio.h>

int main()
{
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks of student %d: " , i+1);
        scanf("%d" , &marks[i]);
    }
    
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Marks of student %d are : %d\n" , i+1 , marks[i]);
    }

    return 0;
}