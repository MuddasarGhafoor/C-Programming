#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 8;

    printf("Original value: %d\n" , a);

    ++a;
    printf("After prefix increment: %d\n" , a);

    printf("Value returned by postfix increment: %d\n" , a++);
    printf("Final value: %d\n" , a);

    return 0;
}
