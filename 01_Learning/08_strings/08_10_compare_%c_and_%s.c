/* Demonstrates compare %c and %s in the strings topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str_1[13];
    char str_2[13];
    printf("Enter the value of first string.\n");
    if (fgets(str_1 , sizeof str_1 , stdin) != NULL)
    {
        str_1[strcspn(str_1 , "\n")] = '\0';
    }

    printf("Enter the value of second string.\n");
    if (fgets(str_2 , sizeof str_2 , stdin) != NULL)
    {
        str_2[strcspn(str_2 , "\n")] = '\0';
    }

    printf("The value of first string is : %s\n" , str_1);
    printf("The value of second string is : %s\n" , str_2);

    printf("strcmp for these two strings return %d.\n" , strcmp(str_1 , str_2));   

    return 0;
}
