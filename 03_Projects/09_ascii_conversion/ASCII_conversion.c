/*
TASK:
Read a line of text and display each character in binary, hexadecimal, and decimal form.
Also calculate the number of bits, bytes, and kilobytes needed to store the text.
*/


#include<stdio.h>
#include<string.h>

void binary(int c)
{
    for (int k = 7; k >= 0; k--)
    {
        printf("%d" , (c >> k) & 1);
    }
}

int main()
{
    char text[100];
    float length;

    printf("\n\nEnter a line or sentence (100 Alphabets) : ");
    gets(text);
    length = strlen(text);

    printf("\n ___________________________________________________________________\n");
    printf("|           |                  |                    |               |");
    printf("\n| Character |   Binary value   | Hexa-decimal value | Decimal value |\n");
    printf("|___________|__________________|____________________|_______________|\n");
    printf("|           |                  |                    |               |\n");

    for (int i = 0; i < length; i++)
    {
        printf("|     %c     |     " , text[i]);
        binary(text[i]);
        printf("     |         %X         |      %3d      |\n" , text[i] , text[i]);
    }

    printf("|___________|__________________|____________________|_______________|\n");

    printf("\n\n______________________________________________________________\n");
    printf("\nNumber of bits required to store to the text are   : %.f\n" , (length * 8));
    printf("Number of bytes required to store to the text are  : %.f\n" , length);
    printf("Number of KBs required to store to the text are    : %f\n" , (length / 1024));
    printf("______________________________________________________________\n\n");

    return 0;
}
