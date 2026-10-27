/* Demonstrates force calculation in the functions and recursion topic. */


#include<stdio.h>
#include<conio.h>

float force(float mass);

int main()
{
    float mass;

    printf("What is the mass of body in kgs?\n");
    scanf("%f" , &mass);

    printf("The force of attraction on a body of mass %fkgs exerted by earth's gravity(9.8m/s^2) is %.2fN.\n" , mass , force(mass));

    return 0;
}

float force(float mass)
{
    float results;
    results = mass * 9.8;
    return results;
}