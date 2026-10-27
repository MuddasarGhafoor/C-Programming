#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    int b;
    char c;
    
    printf("Choose the operator.\n");
    scanf("%c" , &c);

    printf("Enter the value of a.\n");
    scanf("%d" , &a);

    printf("Enter the value of b.\n");
    scanf("%d" , &b);

    if (c == '+')
    {
        printf("The sum of these two numbers is %d.\n" , a+b);
    }
        
    else if (c == '-')
    {
        printf("The difference of these two numbers is %d.\n" , a-b);
    } 

    else if (c == '*')
    {
        printf("The product of these two numbers is %d.\n" , a*b);
    } 

    else if (c == '/')
    {
        if (b == 0)
        {
            printf("Division by zero is not allowed.\n");
        }
        else
        {
            printf("The division of these two numbers is %.2f.\n" , (double)a/b);
        }
    } 

    else if (c == '%')
    {
        if (b == 0)
        {
            printf("Remainder by zero is not allowed.\n");
        }
        else
        {
            printf("The remainder of these two numbers is %d.\n" , a%b);
        }
    }

    else
    {
        printf("Invalid operator!!\n");
    }
    

    return 0;
}
