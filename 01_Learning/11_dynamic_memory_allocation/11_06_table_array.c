/* Demonstrates table array in the dynamic memory allocation topic. */


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n;
    printf("Enter the integer whose table you need.\n");
    scanf("%d" , &n);

    int *ptr;
    ptr = calloc (10 , sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    for (int i=0; i<10; i++)
    {
        ptr[i] = n * (i+1);
        printf("%d X %d = %d\n" , n , i+1 , ptr[i]);
    }

    printf("\nAfter reallocation....\n\n");

    int *resized = realloc(ptr , 15 * sizeof(int));

    if (resized == NULL)
    {
        free(ptr);
        printf("Memory reallocation failed.\n");
        return 1;
    }

    ptr = resized;
    for (int i=0; i<15; i++)
    {
        ptr[i] = n * (i+1);
        printf("%d X %d = %d\n" , n , i+1 , ptr[i]);
    }
    
    free(ptr);
    return 0;
}
