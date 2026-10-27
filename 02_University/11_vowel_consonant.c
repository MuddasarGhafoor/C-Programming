#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char alphabet;
    char choice = 'y';

    while (choice == 'y')
    {
        printf("\nEnter any Alphabet: ");
        scanf(" %c", &alphabet); // Include a space before %c to avoid issues with newline

        switch (alphabet)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("%c is a vowel.\n", alphabet);
                break;
            default:
                printf("%c is a consonant.\n", alphabet);
        }
        printf("Enter 'y' if you want to continue : ");
        choice = getche();
    
    }

    return 0;
}