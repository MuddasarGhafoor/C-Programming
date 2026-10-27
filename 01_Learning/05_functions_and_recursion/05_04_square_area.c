/* Demonstrates square area in the functions and recursion topic. */


#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int side;

    printf("Enter the value of side.\n");
    scanf("%d" , &side);

    printf("The area of the square is %f" , pow(side,2));    

    return 0;
}