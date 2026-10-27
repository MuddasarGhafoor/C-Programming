/* Demonstrates inputting strings in the strings topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char input[50];

    printf("Enter your name :");
    scanf("%s" , input);

    printf("Your name is %s.\n" , input);

    return 0;
}