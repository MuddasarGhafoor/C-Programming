/*
TASK:
Write a C program that accepts the height and width of a parallelogram.
Use a separate function to print the corresponding hollow parallelogram.
*/


#include<stdio.h>

// Function Prototype....
void printHollowParallelogram(void);

int main(void)
{
    // Function Call....
    printHollowParallelogram();

    return 0;
}

// Function Definition....
void printHollowParallelogram(void)
{
    printf("\n");

    // Variable declaretion....
    int height;
    int width;

    // Taking input from the User....
    printf("Enter height of parallelogram: ");
    if (scanf("%d" , &height) != 1 || height < 1)
    {
        printf("Height must be a positive integer.\n");
        return;
    }
    printf("Enter width of parallelogram: ");
    if (scanf("%d" , &width) != 1 || width < 1)
    {
        printf("Width must be a positive integer.\n");
        return;
    }

    printf("\n");

    // Outer for loop, prints height or number of rows entered by the user....
    for (int i = 1; i <= height; i++)
    {
        // First inner loop, print spaces in each line(row), starting from 1 to height with increament of 1....
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        
        // Second inner loop, prints parallelogram (width)....
        for (int k = 1; k <= width; k++)
        {
            // If condition for hollow printing of the parallelogram, (replaces inner asterisks with spaces....)
            if (i > 1 && i < height && k > 1 && k < width)
            {
                printf("  ");
                continue;
            }
            printf("* ");
        }
        
        printf("\n");
    }
    
    printf("\n");
}
