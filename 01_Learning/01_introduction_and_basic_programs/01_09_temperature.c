/* Demonstrates temperature in the introduction and basic programs topic. */


#include <stdio.h>
#include <conio.h>

int main()
{
    float celsius;
    float fahrenheit;
    // Temperature in fahrenheit=(celsius * 9/5) + 32

    printf("What is the temperature in celsius?\n");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;
    printf("Temperature in fahrenheit is %f.\n", fahrenheit);

    return 0;
}
