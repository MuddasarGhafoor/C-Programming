/* Demonstrates structures in the structures topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[13];
};


int main()
{
    struct employee e1;
    e1.code = 6813;
    e1.salary = 1.5;
    strcpy(e1.name , "Meer");

    printf("%d\n" , e1.code);
    printf("%f\n" , e1.salary);
    printf("%s\n" , e1.name);

    return 0;
}