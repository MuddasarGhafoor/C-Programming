/* Demonstrates remainder in the operators and expressions topic. */


#include<stdio.h>
#include<conio.h>

int main()
{
    int number;

    printf("Enter the number.\n");
    scanf("%d" , &number);

    printf("Remainder is: %d\n" , number%97);
    // If remainder is 0, then number is divisible by 97, otherwise not.

    return 0;
}