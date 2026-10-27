/* Demonstrates decrypting a string in the strings topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

void decrypt(char *sms);

int main()
{
    char sms[] = "Nffu!nf!bu!tibsq!9(p!dmpdl/";
    decrypt(sms);
    puts(sms);

    return 0;
}

void decrypt(char *sms)
{
    char *ptr = sms;

    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
    
}