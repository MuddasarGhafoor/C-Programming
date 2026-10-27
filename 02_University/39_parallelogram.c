#include<stdio.h>

// Function Prototype....
void printHollowParallelogram();

int main()
{
    // Function Call....
    printHollowParallelogram();

    return 0;
}

// Function Definition....
void printHollowParallelogram()
{
    printf("\n");

    // Variable declaretion....
    int height;
    int width;

    // Taking input from the User....
    printf("Enter hieght of parallelogram: ");
    scanf("%d" , &height);
    printf("Enter width of parallelogram: ");
    scanf("%d" , &width);

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