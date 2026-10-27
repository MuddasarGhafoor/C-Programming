#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int digit;

    printf("Press any digit to check that it is a normal number or special : ");
    scanf("%d" , &digit);

    if (digit >= 0 && digit <= 9)
    {
        printf("%d is a normal digit." , digit);
    }
    else
    {
        printf("%d is a special digit." , digit);
    }

    return 0;
}