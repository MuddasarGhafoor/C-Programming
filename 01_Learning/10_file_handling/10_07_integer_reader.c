/* Demonstrates integer reader in the file handling topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int a , b , c;

    FILE *ptr;
    ptr = fopen("10_07_integers.txt" , "r");

    fscanf(ptr , "%d %d %d" , &a , &b , &c);
    fclose(ptr);
    printf("The values of a , b and c are %d , %d and %d respectively.\n" , a , b , c);

    return 0;
}