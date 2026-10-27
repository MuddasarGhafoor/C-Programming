#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 8;
    for (int i=0; i<=100; i++)
    {
        if (i!=a)
        {
            continue;
        }
        
        printf("%d" , i);
    }
    

    return 0;
}