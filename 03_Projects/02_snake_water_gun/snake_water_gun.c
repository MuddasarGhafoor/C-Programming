/*
TASK:
Create a Snake-Water-Gun game in which the player competes with the computer.
Generate the computer's choice randomly and display whether the player wins, loses, or draws.
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int determineWinner(char player , char computer);

int main(void)
{
    char player , computer;

    int number;
    srand((unsigned int)time(NULL));
    number = rand() % 3 + 1;

    if (number == 1)
    {computer = 's';}
    else if (number == 2)
    {computer = 'g';}
    else
    {computer = 'w';}
    

    printf("Choose 's' , 'w' or 'g'\n");
    if (scanf(" %c" , &player) != 1)
    {
        printf("Unable to read your choice.\n");
        return 1;
    }

    if (player != 's' && player != 'w' && player != 'g')
    {
        printf("Invalid choice. Enter 's', 'w', or 'g'.\n");
        return 1;
    }

    int results = determineWinner(player , computer);

    printf("You choose %c and computer choose %c.\t" , player , computer);

    if (results == 0)
    {
        printf("Game draw!\n");
    }
    else if (results == 1)
    {
        printf("You win!\n");
    }
    else
    {
        printf("You lose!\n");
    }

    return 0;
}

int determineWinner(char player , char computer)
{
    // Cases      -->  (ss,ww,gg) , (sw,ws) , (gs,sg) , (wg,gw)
    // Conditions -->  (return 0 if draw) , (return 1 if you win) , (return -1 if you lose)

    if (player == computer)
    {return 0;}
    
    if (player == 's' && computer == 'w')
    {return 1;}
    else if (player == 'w' && computer == 's')
    {return -1;}
    
    if (player == 'g' && computer == 's')
    {return 1;}
    else if (player == 's' && computer == 'g')
    {return -1;}
    
    if (player == 'w' && computer == 'g')
    {return 1;}
    else if (player == 'g' && computer == 'w')
    {return -1;}

    return 0;
}
