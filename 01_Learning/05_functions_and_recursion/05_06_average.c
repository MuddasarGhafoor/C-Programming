/* Demonstrates average in the functions and recursion topic. */


#include<stdio.h>
#include<conio.h>

float average(int first , int second , int third);

int main()
{
    int a , b , c;
    
    printf("Enter the first integer.\n");
    scanf("%d" , &a);
    
    printf("Enter the second integer.\n");
    scanf("%d" , &b);
    
    printf("Enter the third integer.\n");
    scanf("%d" , &c);

    printf("The average of %d , %d and %d is %f.\n" , a , b , c , average(a,b,c));

    return 0;
}

float average(int first , int second , int third)
{
    float results;
    results = (float)(first + second + third)/3;
    return results;
}