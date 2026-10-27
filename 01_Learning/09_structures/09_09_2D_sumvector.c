/* Demonstrates 2D sumvector in the structures topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef struct vector
{
    int x;
    int y;
}shortcut;

shortcut sumvector(shortcut v1 , shortcut v2);

int main()
{
    shortcut v1 , v2 , sum;

    v1.x = 6;
    v1.y = 8;
    v2.x = 1;
    v2.y = 3;

    printf("X dimension is %d and Y dimension is %d.\n" , v1.x , v1.y);
    printf("X dimension is %d and Y dimension is %d.\n" , v2.x , v2.y);

    sum = sumvector(v1 , v2);
    printf("Sum of X-dimensions is %d and of Y-dimensions is %d.\n" , sum.x , sum.y);

    return 0;
}

shortcut sumvector(shortcut v1 , shortcut v2)
{
    shortcut result;

    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;

    return result;
}