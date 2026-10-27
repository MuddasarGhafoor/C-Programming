/* Demonstrates encrypting a string in the strings topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

void encrypt(char *sms);

int main()
{
    char sms[] = "Meet me at sharp 8'o clock.";
    encrypt(sms);
    puts(sms);

    return 0;
}

void encrypt(char *sms)
{
    char *ptr = sms;

    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
    
}