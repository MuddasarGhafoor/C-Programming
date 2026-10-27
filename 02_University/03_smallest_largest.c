#include<stdio.h>

int main()
{
    int number_1, number_2, number_3, number_4, number_5;

    printf("Enter number_1 : ");
    scanf("%d" , &number_1);
    printf("Enter number_2 : ");
    scanf("%d" , &number_2);
    printf("Enter number_3 : ");
    scanf("%d" , &number_3);
    printf("Enter number_4 : ");
    scanf("%d" , &number_4);
    printf("Enter number_5 : ");
    scanf("%d" , &number_5);

    if (number_1 > number_2 && number_1 > number_3 && number_1 > number_4 && number_1 > number_5)
    {
        printf("%d is the greatest number.\n" , number_1);
    }
    else if (number_2 > number_1 && number_2 > number_3 && number_2 > number_4 && number_2 > number_5)
    {
        printf("%d is the greatest number.\n" , number_2);
    }
    else if (number_3 > number_1 && number_3 > number_2 && number_3 > number_4 && number_3 > number_5)
    {
        printf("%d is the greatest number.\n" , number_3);
    }
    else if (number_4 > number_1 && number_4 > number_2 && number_4 > number_3 && number_4 > number_5)
    {
        printf("%d is the greatest number.\n" , number_4);
    }
    else if (number_5 > number_1 && number_5 > number_2 && number_5 > number_3 && number_5 > number_4)
    {
        printf("%d is the greatest number.\n" , number_5);
    }
    else
    {
        printf("No largest Numbers!!\n");
    }
    
    if (number_1 < number_2 && number_1 < number_3 && number_1 < number_4 && number_1 < number_5)
    {
        printf("%d is the smallest number.\n" , number_1);
    }
    else if (number_2 < number_1 && number_2 < number_3 && number_2 < number_4 && number_2 < number_5)
    {
        printf("%d is the smallest number.\n" , number_2);
    }
    else if (number_3 < number_1 && number_3 < number_2 && number_3 < number_4 && number_3 < number_5)
    {
        printf("%d is the smallest number.\n" , number_3);
    }
    else if (number_4 < number_1 && number_4 < number_2 && number_4 < number_3 && number_4 < number_5)
    {
        printf("%d is the smallest number.\n" , number_4);
    }
    else if (number_5 < number_1 && number_5 < number_2 && number_5 < number_3 && number_5 < number_4)
    {
        printf("%d is the smallest number.\n" , number_5);
    }
    else
    {
        printf("No Smallest Numbers!!\n");
    }
    
    return 0;
}