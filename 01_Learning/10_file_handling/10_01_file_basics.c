/* Demonstrates file basics in the file handling topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    FILE *ptr;

    ptr = fopen("10_01_sample.txt" , "r");    // For reading a file 
    if (ptr != NULL)
    {
        fclose(ptr);
    }

    ptr = fopen("10_01_sample.txt" , "w");    // For writing to a file
    if (ptr != NULL)
    {
        fclose(ptr);
    }

    return 0;
}
