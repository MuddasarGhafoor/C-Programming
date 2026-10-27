/* Demonstrates structures in function in the structures topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>


struct my
{
    int code;
    float salary;
    char name[10];
};

void show (struct my emp);

int main()
{
    struct my first;
    struct my *ptr;
    ptr = &first;

    ptr->code = 1234;
    ptr->salary = 24.342;
    strcpy(ptr->name , "womei");

    show(first);

    return 0;
}

void show (struct my emp)
{
    printf("Code is : %d\n" , emp.code);
    printf("Salary is : %f\n" , emp.salary);
    printf("Name is : %s\n" , emp.name);
}