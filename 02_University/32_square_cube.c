#include<stdio.h>

void square_1();
void square_2(float num);

int main()
{
    float numb;
    square_1();
    printf("enter a number:");
    scanf("%f",&numb);
    square_2(numb);
    return 0;
}

void square_1()
{
    float num,result;
    printf("enter a number:");
    scanf("%f",&num);
    result=num*num;
    printf("square of %f is %f\n", num,result);
}
void square_2(float numb)
{
    float result;
    result=numb*numb*numb;
    printf("cube of the given number is %f",result);
}