/* Demonstrates 2D vector in the structures topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

struct vector
{
    int x;
    int y;
};


int main()
{
    struct vector v1 , v2;

    v1.x = 23;
    v1.y = 65;
    v2.x = 3435;
    v2.y = 5323;

    printf("X dimension is %d and Y dimension is %d.\n" , v1.x , v1.y);
    printf("X dimension is %d and Y dimension is %d.\n" , v2.x , v2.y);

    return 0;
}