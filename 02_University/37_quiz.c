#include<stdio.h>

int main()
{
    int num;
    int value;
    int even_sum = 0;
    int odd_sum = 0;

    printf("Enter the number of integers to process (0-11): ");
    scanf("%d", &num);

    if (num < 0 || num > 11)
    {
        printf("Invalid input. Enter a number from 0 to 11.\n");
        return 1;
    }

    for (int x = 1; x <= num; x++)
    {
        printf("Enter integer %d: ", x);
        scanf("%d", &value);

        if (value % 2 == 0)
        {
            printf("%d is an even number.\n", value);
            even_sum += value;
        }
        else
        {
            printf("%d is an odd number.\n", value);
            odd_sum += value;
        }
    }

    printf("The sum of even numbers = %d\n", even_sum);
    printf("The sum of odd numbers = %d\n", odd_sum);

    return 0;
}

/*
Write a C program that prompts the user to enter an integer between 0 and 11.
Then, the program should repeatedly ask the user to enter an integer and 
determine whether each input is even or odd. For each input, 
the program should print a message indicating whether the number is even or odd, 
and it should keep track of the sum of even numbers and the sum of odd numbers separately.
After processing the specified number of inputs, the program should display the 
total sum of even numbers and the total sum of odd numbers. 
Ensure the program handles inputs correctly and provides appropriate feedback
*/
