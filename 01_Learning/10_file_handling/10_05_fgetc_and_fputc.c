/* Demonstrates fgetc and fputc in the file handling topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    FILE *ptr;
    ptr = fopen("10_05_getc.txt" , "r");

    printf("%c" , fgetc(ptr));
    printf("%c" , fgetc(ptr));
    printf("%c" , fgetc(ptr));
    printf("%c" , fgetc(ptr));
    printf("%c" , fgetc(ptr));
    fclose(ptr);


    FILE *ptr2;
    ptr2 = fopen("10_05_putc.txt" , "w");

    fputc('m' , ptr2);
    fputc('e' , ptr2);
    fputc('e' , ptr2);
    fputc('r' , ptr2);
    fclose(ptr2);

    return 0;
}