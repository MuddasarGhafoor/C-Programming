/* Demonstrates operators in the operators and expressions topic. */


#include <stdio.h>
#include <conio.h>

int main()
{
    int x=2 , y=3 , z=3 , k=1;
    int answer = 3*x/y-z+k;

    // Answer will be '0' by following steps:
    // 3*x/y-z+k
    // 3*2/3-3+1
    // 6/3-3+1
    // 2-3+1
    // -1+1
    // 0

    printf("Answer is %d\n" , answer);

    return 0;
}