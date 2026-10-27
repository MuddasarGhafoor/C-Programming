/* Demonstrates strcat string function in the strings topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char first[15] = "Hi ";
    char *second = "Meer";

    strcat (first , second);

    printf("Now first string is : %s\n" , first);

    return 0;
}