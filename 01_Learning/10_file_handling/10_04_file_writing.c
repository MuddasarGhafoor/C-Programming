/* Demonstrates file writing in the file handling topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    FILE *ptr;
    ptr = fopen("10_04_generated.txt" , "w");

    int num = 28;
    fprintf(ptr , "The number is %d." , num);
    fclose(ptr);

    return 0;
}