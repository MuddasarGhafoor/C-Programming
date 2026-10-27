/* Demonstrates file reading in the file handling topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int num;

    FILE *ptr;
    ptr = fopen("10_02_hikoo.txt" , "r");

    fscanf(ptr , "%d" , &num);
    fclose(ptr);
    
    printf("The value of num is %d.\n" , num);

    return 0;
}