/* Demonstrates print strings in the strings topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char name[] = "Meer Hamza";
    char *ptr = name;

    while (*ptr != '\0')
    {
        printf("%c" , *ptr);
        ptr++;
    }
    

    return 0;
}