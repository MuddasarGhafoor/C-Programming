#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char alphabet;

    printf("Enter an alphabet to check wheather it is vowel or consonant : ");
    scanf("%c" , &alphabet);

    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u')
    {
        printf("%c is a vowel." , alphabet);
    }
    else
    {
        printf("%c is a consonant." , alphabet);
    }
    
    

    return 0;
}