/* Demonstrates simple interest in the introduction and basic programs topic. */


#include <stdio.h>
#include <conio.h>

int main()
{
    int Principal, Rate, Years;

    printf("Principal is?\n");
    scanf("%d" , &Principal);

    printf("Rate is?\n");
    scanf("%d" , &Rate);

    printf("Years are?\n");
    scanf("%d" , &Years);
    
    int SimpleInterest = (Principal * Rate * Years) / 100;

    printf("SimpleInterest is %d.\n", SimpleInterest);

    return 0;
}