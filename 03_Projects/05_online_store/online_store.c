/*
TASK:
Develop an online-store program that displays products and accepts a customer's order.
Generate a bill, validate quantities and product numbers, and update available stock.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PRODUCT_COUNT 5

struct product {
    int p_number;
    char p_name[50];
    float price;
    int quantity;
};

void displayMenu(struct product p[], int size);
void generateBill(struct product p[], int size, int productNumbers[], int quantities[], int n);

int main(void) {
    struct product p[PRODUCT_COUNT];
    printf("\n\t\t======== Welcome to the COMSATS online store ========\n");

    p[0].p_number = 101;
    strcpy(p[0].p_name, "Soap");
    p[0].price = 50.00;
    p[0].quantity = 10;

    p[1].p_number = 102;
    strcpy(p[1].p_name, "Liquid Hand Wash");
    p[1].price = 200.00;
    p[1].quantity = 20;

    p[2].p_number = 103;
    strcpy(p[2].p_name, "Liquid Dish Wash");
    p[2].price = 300.00;
    p[2].quantity = 30;

    p[3].p_number = 104;
    strcpy(p[3].p_name, "Table Cleaner");
    p[3].price = 350.00;
    p[3].quantity = 50;

    p[4].p_number = 105;
    strcpy(p[4].p_name, "Hand Sanitizer");
    p[4].price = 100.00;
    p[4].quantity = 50;

    char choice;

    do {
        displayMenu(p, PRODUCT_COUNT);

        int n;
        printf("\n\nEnter the number of products you want to purchase : ");
        if (scanf("%d", &n) != 1 || n < 1 || n > PRODUCT_COUNT) {
            printf("Enter a product count from 1 to %d.\n", PRODUCT_COUNT);
            return 1;
        }

        int productNumbers[PRODUCT_COUNT];
        int quantities[PRODUCT_COUNT];

        for (int i = 0; i < n; i++) {
            printf("Enter the product number of product %d : ", i + 1);
            if (scanf("%d", &productNumbers[i]) != 1) {
                printf("Invalid product number.\n");
                return 1;
            }
            printf("Enter the quantity : ");
            if (scanf("%d", &quantities[i]) != 1 || quantities[i] < 1) {
                printf("Quantity must be a positive integer.\n");
                return 1;
            }
        }

        printf("\n\t======== Here is your bill Sir ========\n\n");
        generateBill(p, PRODUCT_COUNT, productNumbers, quantities, n);

        printf("\n\nDo you want to make another purchase? (y/n): ");
        if (scanf(" %c", &choice) != 1) {
            return 1;
        }

    } while (choice == 'y' || choice == 'Y');

    printf("\n\nThank you for shopping with us !!\n\n");

    return 0;
}

void displayMenu(struct product p[], int size) {
    printf("\nProduct Number |     Product Name     | Retail Price in Rs | Quantity Available\n");
    printf("-------------------------------------------------------------------------------\n");
    for (int i = 0; i < size; i++) {
        printf("      %d\t      %-18s\t%.2f\t       %d\n", p[i].p_number, p[i].p_name, p[i].price, p[i].quantity);
    }
}

void generateBill(struct product p[], int size, int productNumbers[], int quantities[], int n) {
    float totalCost = 0.0;
    printf("Product Number |     Product Name     | Retail Price in Rs | Quantity | Total Price\n");
    printf("-------------------------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < size; j++) {
            if (productNumbers[i] == p[j].p_number) {
                found = 1;
                if (quantities[i] <= p[j].quantity) {
                    float totalPrice = p[j].price * quantities[i];
                    totalCost += totalPrice;
                    printf(" %d\t      %-18s\t%.2f\t\t   %d\t     %.2f\n", p[j].p_number, p[j].p_name, p[j].price, quantities[i], totalPrice);
                    p[j].quantity -= quantities[i]; // Update the quantity available
                } else {
                    printf(" %d\t      %-18s\t%.2f\t\t   %d\t     Insufficient stock. Only %d left in stock.\n", p[j].p_number, p[j].p_name, p[j].price, quantities[i], p[j].quantity);
                }
                break;
            }
        }
        if (!found) {
            printf(" %d\t      Unknown product number.\n", productNumbers[i]);
        }
    }

    printf("\n\nTotal Bill : Rs %.2f\n\n", totalCost);
}
