/* Demonstrates calculator in the introduction and basic programs topic. */


# include<stdio.h>

int main()
{
    int a,b;

    printf("Enter the value of a\n");
    scanf("%d", &a);
    
    printf("Enter the value of b\n");
    scanf("%d", &b);
    
    printf("Sum of a and b is %d\n",a+b);

    return 0;
}