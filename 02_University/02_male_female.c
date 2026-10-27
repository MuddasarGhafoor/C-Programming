#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int hair_length = 8;
    int head_cover;

    printf("Enter hair length in inches.\n");
    scanf("%d" , &hair_length);
    printf("If head is covered, press 1 otherwise press 0.\n");
    scanf("%d" , &head_cover);

    if (hair_length >= 8 && head_cover == 1)
    {
        printf("****Female****");
    }
    else
    {
        printf("*****Male*****");
    }

    return 0;
}