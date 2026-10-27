/* Demonstrates structures array in the structures topic. */


#include<stdio.h>
#include<conio.h>
#include<string.h>

struct member
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct member facebook[100];

    facebook[0].code = 116;
    facebook[0].salary = 234.098;
    strcpy(facebook[0].name , "guyt");

    facebook[1].code = 5678;
    facebook[1].salary = 4678.8;
    strcpy(facebook[1].name , "cybu");

    facebook[2].code = 789;
    facebook[2].salary = 980.89;
    strcpy(facebook[2].name , "vuguu");
    
    // and so on....

    return 0;
}