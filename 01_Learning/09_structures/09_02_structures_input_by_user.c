/* Demonstrates structures input by user in the structures topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[15];
};

int main()
{
    struct employee e1 , e2 , e3;
    
    printf("Enter the code of e1 : ");
    scanf("%d" , &e1.code);
    printf("Enter the salary of e1 : ");
    scanf("%f" , &e1.salary);
    printf("Enter the name of e1 : ");
    scanf("%s" , e1.name);

    printf("\n");
    
    printf("Enter the code of e2 : ");
    scanf("%d" , &e2.code);
    printf("Enter the salary of e2 : ");
    scanf("%f" , &e2.salary);
    printf("Enter the name of e2 : ");
    scanf("%s" , e2.name);
    
    printf("\n");
    
    printf("Enter the code of e3 : ");
    scanf("%d" , &e3.code);
    printf("Enter the salary of e3 : ");
    scanf("%f" , &e3.salary);
    printf("Enter the name of e3 : ");
    scanf("%s" , e3.name);

    printf("\n");

    return 0;
}