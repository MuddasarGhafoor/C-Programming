#include<stdio.h>
int main()
{
	int a,b,c;//c is hypotenuse 
	printf("Enter the value of a, b, c respectively : ");
	scanf("%d %d %d",&a,&b,&c);
	if((a*a)+(b*b) == (c*c))
	printf("The triangle is right angle triangle");
	else
	printf("The triangle is not a right angle triangle");
	return 0;
}
