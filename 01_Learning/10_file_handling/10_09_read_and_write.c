/* Demonstrates read and write in the file handling topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    FILE *ptr_1;
    FILE *ptr_2;

    ptr_1 = fopen("10_09_to_read.txt" , "r");
    ptr_2 = fopen("10_09_written.txt" , "w");

    int c = fgetc(ptr_1);
    while (c != EOF)
    {
        fputc(c , ptr_2);
        c = fgetc(ptr_1);
    }
    
    fclose(ptr_1);
    fclose(ptr_2);

    return 0;
}
