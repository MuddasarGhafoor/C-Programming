/* Demonstrates realloc in the dynamic memory allocation topic. */


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int *ptr;
    ptr = malloc (8 * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i=0; i<8; i++)
    {
        printf("Enter the value of %d element : " , i+1);
        scanf("%d" , &ptr[i]);
    }

    for (int i=0; i<8; i++)
    {
        printf("The value of %d element is %d.\n" , i+1 , ptr[i]);
    }

    int *resized = realloc (ptr , 5 * sizeof(int));

    if (resized == NULL)
    {
        free(ptr);
        printf("Memory reallocation failed.\n");
        return 1;
    }

    ptr = resized;

    for (int i=0; i<5; i++)
    {
        printf("Enter the value of %d element : " , i+1);
        scanf("%d" , &ptr[i]);
    }

    for (int i=0; i<5; i++)
    {
        printf("The value of %d element is %d.\n" , i+1 , ptr[i]);
    }
    
    free(ptr);
    return 0;
}
