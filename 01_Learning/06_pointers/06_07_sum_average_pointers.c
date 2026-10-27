/* Demonstrates sum average pointers in the pointers topic. */


#include<stdio.h>
#include<conio.h>

void sum_average(int first , int second , int *sum , float *average);

int main()
{
    int a;
    int b;
    int sum;
    float average;

    printf("Enter the first digit.\n");
    scanf("%d" , &a);

    printf("Enter the second digit.\n");
    scanf("%d" , &b);

    sum_average(a , b , &sum , &average);

    printf("Sum of %d and %d is %d.\n" , a , b , sum);
    printf("Average of %d and %d is %.2f.\n" , a , b , average);

    return 0;
}

void sum_average(int first , int second , int *sum , float *average)
{
    *sum = first + second;
    *average = (float)(*sum)/2;
}