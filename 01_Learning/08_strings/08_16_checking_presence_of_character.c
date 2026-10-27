/* Demonstrates checking presence of character in the strings topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

int presence(char ran[] , char c);

int main()
{
    char ran[] = "neomonoultramicroscopicsilicovolcanoconiosis";
    int dgt = presence(ran , 'y');

    if (dgt != 0)
    {
        printf("Entered character is present.\n");
    }

    else
    {
        printf("Entered character is not present.\n");
    }
    
    

    return 0;
}

int presence(char ran[] , char c)
{
    char *ptr = ran;
    int check = 0;

    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            check ++;
        }
        ptr++;
    }
    return check;
}