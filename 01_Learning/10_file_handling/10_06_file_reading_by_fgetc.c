/* Demonstrates file reading by fgetc in the file handling topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    FILE *ptr;
    ptr = fopen("10_06_reading.txt" , "r");

    int c;
    c = fgetc(ptr);
    while (c != EOF)
    {
        printf("%c" , c);
        c = fgetc(ptr);
    }

    fclose(ptr);

    return 0;
}
