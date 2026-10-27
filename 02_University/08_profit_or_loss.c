#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int cost_price;
    int selling_price;

    printf("Enter the cost price of item : ");
    scanf("%d" , &cost_price);
    printf("Enter the selling price of item : ");
    scanf("%d" , &selling_price);

    if (cost_price < selling_price)
    {
        printf("Seller made a profit of %d RS." , (selling_price)-(cost_price));
    }
    else if (cost_price > selling_price)
    {
        printf("Seller incurred a loss of %d RS." , (cost_price)-(selling_price));
    }
    else if (cost_price == selling_price)
    {
        printf("Seller made no profit and incurred no loss.");
    }

    return 0;
}