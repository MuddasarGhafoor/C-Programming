#include<stdio.h>
#include<conio.h>

int main()
{
    char alphabet;

    printf("Enter any alphabet.\n");
    scanf("%c" , &alphabet);

    if (alphabet >= 65 && alphabet <= 90)
    {
        for (char i = alphabet; i <= 90; i++)
        {
            printf("%c\t" , i);
        }
    }

    else if (alphabet >= 97 && alphabet <= 122)
    {
        for (char i = alphabet; i <= 122; i++)
        {
            printf("%c\t" , i);
        }
    }

    return 0;
}