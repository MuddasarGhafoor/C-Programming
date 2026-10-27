/* Demonstrates typedef in the structures topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>


typedef struct my
{
    int code;
    float salary;
    char name[10];
}easy;

// void show (struct my emp);

void show (easy emp);

int main()
{
    // struct my first;
    // struct my *ptr;

    easy first;
    easy *ptr;

    ptr = &first;

    ptr->code = 1234;
    ptr->salary = 24.342;
    strcpy(ptr->name , "womei");

    show(first);

    return 0;
}

// void show (struct my emp)

void show (easy emp)
{
    printf("Code is : %d\n" , emp.code);
    printf("Salary is : %f\n" , emp.salary);
    printf("Name is : %s\n" , emp.name);
}