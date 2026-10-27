/* Demonstrates structure storing date in the structures topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

typedef struct date
{
    int date;
    int month;
    int year;
}date;

void display(date f);
int comp(date f , date s);

int main()
{
    date first = {29 , 1 , 2024};
    date second = {28 , 8 , 2005};

    display (first);
    display (second);

    int result = comp(first , second);
    printf("Date comparison function returns : %d\n" , result);

    return 0;
}

void display(date f)
{
    printf("The date is %d/%d/%d\n" , f.date , f.month , f.year);
}

int comp(date f , date s)
{
    if (f.year > s.year)
    {
        return 1;
    }
    if (f.year < s.year)
    {
        return -1;
    }

    if (f.month > s.month)
    {
        return 1;
    }
    if (f.month < s.month)
    {
        return -1;
    }

    if (f.date > s.date)
    {
        return 1;
    }
    if (f.date < s.date)
    {
        return -1;
    }

    else
    {
        return 0;
    }
    
    
}