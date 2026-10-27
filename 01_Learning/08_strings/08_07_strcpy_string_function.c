/* Demonstrates strcpy string function in the strings topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char intro[] = "I am a student.";
    char target[20];

    strcpy(target , intro);

    printf("Now the target is : %s\n" , target);

    return 0;
}