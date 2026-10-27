/* Demonstrates slicing the string in the strings topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

void slice(char *org , int m , int n);

int main()
{
    char org[] = "Chikoo";
    slice(org , 1 , 5);
    printf("%s" , org);

    return 0;
}

void slice(char *org , int m , int n)
{
    int i = 0;

    while ((i+m) < n)
    {
        org[i] = org[i+m];
        i++;
    }
    org[i] = '\0';
    
}