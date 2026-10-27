/* Stores and displays multiplication tables in a two-dimensional array. */


#include<stdio.h>
#include<conio.h>

void table(int *m_table , int num);

int main()
{
    int a;
    int b;
    int c;;

    printf("Enter the first number whose multiplication table you want.\n");
    scanf("%d" , &a);

    printf("Enter the second number whose multiplication table you want.\n");
    scanf("%d" , &b);

    printf("Enter the third number whose multiplication table you want.\n");
    scanf("%d" , &c);

    int m_table[3][10];

    table(m_table[0] , a);
    table(m_table[1] , b);
    table(m_table[2] , c);

    return 0;
}

void table(int *m_table , int num)
{

    printf("Multiplication table of %d is :\n\n" , num);

    for (int i=0; i<10; i++)
    {
        m_table[i] = num * (i+1);
    }

    for (int i=0; i<10; i++)
    {
        printf("%d  X  %d  =  %d\n" , num , i+1 , m_table[i]);
    }
    
    printf("\n********************\n\n");
    
}
