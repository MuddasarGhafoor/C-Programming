/* Demonstrates function basic in the functions and recursion topic. */


#include<stdio.h>
#include<conio.h>

void display();   // Function Prototype

int main()
{
    printf("Initializing display function.\n");
    display();   // Function Call
    printf("Display function finished its work.\n");

    return 0;
}

// Function Definition
void display()
{
    printf("This is display.\n");
}