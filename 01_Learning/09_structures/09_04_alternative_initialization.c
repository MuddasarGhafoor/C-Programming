/* Demonstrates alternative initialization in the structures topic. */


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
    struct my one = {1368 , 28.08 , "Hamza"};

    printf("Code is : %d\n" , one.code);
    printf("Salary is : %f\n" , one.salary);
    printf("Name is : %s\n" , one.name);

    return 0;
}