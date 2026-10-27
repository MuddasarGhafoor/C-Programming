/* Demonstrates complex nums with function in the structures topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef struct complex
{
    int real;
    int imaginary;
}comp;

void display(comp c);

int main()
{
    comp c_nums[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real value for %d number : " , i+1);
        scanf("%d" , &c_nums[i].real);
    
        printf("Enter the imaginary value for %d number : " , i+1);
        scanf("%d" , &c_nums[i].imaginary);
    }

    for (int i = 0; i < 5; i++)
    {
        display(c_nums[i]);
    }
    
    return 0;
}
void display(comp c)
{
    printf("The value of real part is %d.\n" , c.real);
    printf("The value of imaginary part is %d.\n" , c.imaginary);
}