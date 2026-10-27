/* Demonstrates 3D array showing addresses in the arrays topic. */


#include<stdio.h>
#include<conio.h>

int main()
{
    int add_array[2][3][4];

    for (int i=0; i<2; i++)
    {
        for (int j=0; j<3; j++)
        {
            for (int k=0; k<4; k++)
            {
                printf("The address of [%d][%d][%d] is %p\n" , i , j , k , (void *)&add_array[i][j][k]);
            }
            
        }
        
    }
    

    return 0;
}
