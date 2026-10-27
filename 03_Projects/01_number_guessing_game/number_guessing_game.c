/*
TASK:
Create a number-guessing game that generates a random value from 1 to 100.
Guide the player with higher/lower hints and report the number of attempts.
*/


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number;
    int guess;
    int nguesses = 1;

    srand(time(0));

    number = rand() % 100 + 1;

    // printf("The number is %d.\n" , number);

    do
    {
        printf("Guess the number between 1 to 100.\n");
        scanf("%d" , &guess);

            if (guess > number)
            {
                printf("Lower number please!\n");
            }

            else if (guess < number)
            {
                printf("Higher number please!\n");
            }

            else
            {
                printf("You guessed the number in %d attempts.\n" , nguesses);
            }

        nguesses++;
                        
    } while (guess != number);
    
    return 0;
}
