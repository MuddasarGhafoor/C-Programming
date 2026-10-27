/* Demonstrates gets and puts in the strings topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    // char input[50];

    // printf("Enter your name :");
    // scanf("%s" , input);

    // printf("Your name is %s.\n" , input);

    // In the upper case(using a %s function) , if we give an input with spaces , output will be the fisrt word only.
    // To overcome this problem and for printing multiple words with spaces , gets are used.
    // Puts only prints the string and places the cursor to the next line.



    char input[50];

    printf("Enter your name :");
    if (fgets(input , sizeof input , stdin) != NULL)
    {
        input[strcspn(input , "\n")] = '\0';
        puts(input);
    }

    return 0;
}
