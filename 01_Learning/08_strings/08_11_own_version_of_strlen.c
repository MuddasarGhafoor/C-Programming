/* Demonstrates own version of strlen in the strings topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

int str(char *version);

int main()
{
    char version[] = "Meer";
    int length = str(version);
    printf("The length of this string is %d.\n" , length);

    return 0;
}

int str(char *version)
{
    char *ptr = version;
    int len = 0;

    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }
        return len;
}
