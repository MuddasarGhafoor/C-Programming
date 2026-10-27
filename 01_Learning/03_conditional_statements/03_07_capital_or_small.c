/* Demonstrates capital or small in the conditional statements topic. */


#include<stdio.h>
#include<conio.h>

int main()
{
    char alphabet;

    printf("Enter the character.\n");
    scanf("%c" , &alphabet);

    if (alphabet>=97 && alphabet<=122)
    {
        printf("%c is a small letter.\n" , alphabet);
    }

    else if (alphabet>=65 && alphabet<=90)
    {
        printf("%c is a capital letter.\n" , alphabet);
    }

    else
    {
        printf("Wrong!!");
    }
    


    return 0;
}