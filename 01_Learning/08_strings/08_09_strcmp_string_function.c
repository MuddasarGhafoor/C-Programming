/* Demonstrates strcmp string function in the strings topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char first[15] = "Hi ";
    char *second = "Meer";

    int value = strcmp (first , second);

    printf("Now the value is : %d\n" , value);

    return 0;
}