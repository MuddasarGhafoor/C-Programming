#include<stdio.h>
#include<conio.h>

int main()
{
    char r;

    printf("Enter an alphabet.\n");
    scanf("%c" , &r);

    if (r==109)
    {
            for (int i = 0; i < 10; i++)
        {
            printf("Meer\n");
        }
    }
    
    else if (r==104)
    {
            for (int i = 0; i < 10; i++)
        {
            printf("Hamza\n");
        }
    }

    else
    {
        printf("Meer Hamza.\n");
    }
            
    return 0;
}

// a=97
// z=122
// A=65
// Z=90