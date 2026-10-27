#include<stdio.h>
#include<conio.h>

int main()
{
    char n;

    printf("Press 'm' or 'c'.\n");
    scanf("%c" , &n);

    if (n == 'm')
    {
        printf("Meer");
    }

    else if (n == 'c')
    {
        printf("Chikoo");
    }

    else
    {
        printf("Wrong!! Choose 'm' or 'c'.\n");
    }
              
    return 0;
}

// a=97
// z=122
// A=65
// Z=90
