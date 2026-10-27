/* Demonstrates array pointer operations in the arrays topic. */


#include<stdio.h>
#include<conio.h>
#include<stddef.h>

int main()
{
    int values[] = {10 , 20 , 30 , 40};
    int *first = &values[0];
    int *third = &values[2];
    ptrdiff_t distance = third - first;

    printf("First address: %p\n" , (void *)first);
    printf("Next address: %p\n" , (void *)(first + 1));
    printf("Element distance: %td\n" , distance);
    printf("Pointers equal: %d\n" , first == third);

    return 0;
}
