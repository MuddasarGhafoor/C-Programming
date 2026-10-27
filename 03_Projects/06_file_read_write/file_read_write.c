/*
TASK:
Read a line of text, save it to a file, and copy it to a second file.
While copying, count and display the uppercase and lowercase characters.
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
    // Write in File 'testfile.txt' ....
    FILE *first = fopen("testfile.txt" , "w");
    if (first == NULL)
    {
        printf("FIle could not open !!\n");
        return 1;
    }

    char line[1000];
    printf("\n\nEnter a line a paragraph : ");
    if (fgets(line , sizeof line , stdin) == NULL)
    {
        printf("Unable to read input.\n");
        fclose(first);
        return 1;
    }
    line[strcspn(line , "\n")] = '\0';
    fprintf(first , "%s" , line);

    fclose(first);

    // Read from file 'testfile.txt' and check upper case and lower case characters and write in 'destinationFile.txt' ....
    first = fopen("testfile.txt" , "r");
    if (first == NULL)
    {
        printf("FIle could not open !!\n");
        return 1;
    }

    FILE *second = fopen("destinationFile.txt" , "w");
    if (second == NULL)
    {
        printf("FIle could not open !!\n");
        fclose(first);
        return 1;
    }
    
    int lower = 0;
    int upper = 0;
    int check;

    while ((check = fgetc(first)) != EOF)
    {
        if (isupper((unsigned char)check))
        {
            upper ++;
        }
        else if (islower((unsigned char)check))
        {
            lower ++;
        }
        fputc(check , second);
    }

    // Printing the results ....
    printf("\nTotal number of upper case characters : %d\n" , upper);
    printf("\nTotal number of lower case characters : %d\n" , lower);
    printf("\nText Copied from 'testfile.txt' to 'destinationFile.txt'\n\n");

    fclose(first);
    fclose(second);

    return 0;
}
