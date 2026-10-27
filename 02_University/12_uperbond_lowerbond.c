#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char choice ='y';
    while (choice=='y')
    {
        int i,lb,ub;
        int number;
        
        printf("\nEnter a number to get its Table: ");
        scanf("%d",&number);
        printf("Enter Lower Bound:");
        scanf("%d",&lb);
        printf("Enter Upper Bound");
        scanf("%d",&ub);

        for(i=lb;i<=ub;i++)
        {
            printf("%d*%d=%d\n",number,i, number*i);
        }

        printf("Do you want to continue press(y) for Yes and (n) for No: ");
        choice=getche();
    }

    return 0;
}