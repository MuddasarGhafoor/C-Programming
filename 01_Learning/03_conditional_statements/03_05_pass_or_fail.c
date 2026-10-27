/* Demonstrates pass or fail in the conditional statements topic. */


#include<stdio.h>
#include<conio.h>

int main()
{
    int physics , mathematics , computer;
    float total;

    printf("Enter your physics marks.\n");
    scanf("%d" , &physics);

    printf("Enter your mathematics marks.\n");
    scanf("%d" , &mathematics);

    printf("Enter your computer marks.\n");
    scanf("%d" , &computer);

    total = (physics + mathematics + computer)/3.0f;

    if (total<40 || physics<33 || mathematics<33 || computer<33)
    {
        printf("Your total percentage is %f and you are fail.\n" , total);
    }

    else
    {
        printf("Your total percentage is %f and you are pass.\n" , total);
    }
    
    
    return 0;
}
