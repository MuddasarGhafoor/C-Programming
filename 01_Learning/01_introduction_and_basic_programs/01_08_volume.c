/* Demonstrates volume in the introduction and basic programs topic. */


#include <stdio.h>

int main()
{
    float pi = 3.14;
    int radius;
    int height;

    printf("What is the radius of circle?\n");
    scanf("%d", &radius);

    printf("What is the height of cylinder?\n");
    scanf("%d", &height);
    
    // Area of the circle = pi*radius*radius
    // Volume of the cylinder = pi*radius*radius*height

    printf("Area of the circle is %f.\n", pi * radius * radius);
    printf("Volume of cylinder is %f.\n", pi * radius * radius * height);

    return 0;
}