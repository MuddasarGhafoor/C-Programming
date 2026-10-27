/* Demonstrates mul tables file in the file handling topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int num;
    printf("Enter the integer whose multiplication table you need.\n");
    scanf("%d" , &num);

    FILE *ptr;
    ptr = fopen("10_08_table.txt" , "w");

    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr , "%d X %d = %d\n" , num , i+1 , num*(i+1));
    }
    fclose(ptr);

    printf("Successfully generated the table of %d in file table.txt.\n" , num);

    return 0;
}