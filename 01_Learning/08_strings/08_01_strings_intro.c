/* Demonstrates strings intro in the strings topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char string_1[] = {'M' , 'E' , 'E' , 'R' , '\0'};    // ==> First Method

    char string_2[] = "MEER";                            // ==> Second Method

    printf("%s\n" , string_1);
    printf("%s\n" , string_2);

    return 0;
}
