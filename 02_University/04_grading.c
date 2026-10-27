#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int marks;

    printf("Enter you marks out of 100 : ");
    scanf("%d" , &marks);

    if (marks >= 90 && marks <= 100)
    {
        printf("Your grade is A.");
    }
    else if (marks >= 80 && marks <= 89)
    {
        printf("Your grade is B.");
    }
    else if (marks >= 70 && marks <= 79)
    {
        printf("Your grade is C.");
    }
    else if (marks >= 60 && marks <= 69)
    {
        printf("Your grade is D.");
    }
    else if (marks >= 50 && marks <= 59)
    {
        printf("Your grade is E.");
    }
    else if (marks <= 49 && marks >= 0)
    {
        printf("Your are fail as your marks are less then 50.");
    }
    else
    {
        printf("Wrong marks!!");
    }
    

    return 0;
}