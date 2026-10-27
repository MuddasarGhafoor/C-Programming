#include<stdio.h>
#include<conio.h>

int main()
{
    float first , second;
    char choice;
    
    printf("Enter first number : ");
    scanf("%f" , &first);

    printf("Choose the operator (+ , - , * , /) : ");
    scanf(" %c" , &choice);

    printf("Enter second number : ");
    scanf("%f" , &second);

    if (choice == '+')
    {
        printf("The sum of %.2f and %.2f is %.2f.\n" , first , second , first+second);
    }  
    else if (choice == '-')
    {
        printf("The minus of %.2f and %.2f is %.2f.\n" , first , second , first-second);
    } 
    else if (choice == '*')
    {
        printf("The multiply of %.2f and %.2f is %.2f.\n" , first , second , first*second);
    } 
    else if (choice == '/')
    {
        printf("The division of %.2f and %.2f returns %.2f.\n" , first , second , first/second);
    }
    else
    {
        printf("Invalid operator!!\n");
    }
    
    return 0;
}