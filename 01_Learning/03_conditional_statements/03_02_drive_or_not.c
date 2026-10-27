/* Demonstrates drive or not in the conditional statements topic. */


#include<stdio.h>
#include<conio.h>

int main()
{
    int age;

    printf("What's your age?\n");
    scanf("%d" , &age);

    if (age>=18){

        printf("If you have a driving licence, than you can drive.\n");
    }

    else{

        printf("You are underage, so you can not drive.\n");
    }

    return 0;
}