/* Demonstrates area in the introduction and basic programs topic. */


#include <stdio.h>

int main()
{
    int length, width;
    // Area=length*width

    printf("What is the length of rectangle?\n");
    scanf("%d", &length);

    printf("What is the width of rectangle?\n");
    scanf("%d", &width);

    printf("Area of the rectangle is %d.\n", length * width);

    return 0;
}