/* Demonstrates strlen string function in the strings topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

// For using strlen function , we have to include <string.h> header file.

int main()
{
    char *age = "I'm 18 years old.";
    int lenght = strlen(age);

    printf("There are %d characters in this string.\n" , lenght);

    return 0;
}