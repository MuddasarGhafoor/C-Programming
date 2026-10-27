/* Demonstrates counting occurance of character in the strings topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

int occurance(char ran[] , char c);

int main()
{
    char ran[] = "neomonoultramicroscopicsilicovolcanoconiosis";
    int dgt = occurance(ran , 'm');
    printf("Occurance = %d" , dgt);

    return 0;
}

int occurance(char ran[] , char c)
{
    char *ptr = ran;
    int count = 0;

    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count ++;
        }
        ptr++;
    }
    return count;
}