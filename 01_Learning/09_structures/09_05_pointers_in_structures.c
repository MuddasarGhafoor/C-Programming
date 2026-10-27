/* Demonstrates pointers in structures in the structures topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>


struct my
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct my first;
    struct my *ptr;
    ptr = &first;

    (*ptr).code = 1234;
    // ptr->code = 1234;    // It can also be done.

    printf("%d\n" , first.code);

    return 0;
}