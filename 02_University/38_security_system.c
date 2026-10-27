#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char names[6][10] = {
                            "Meer",
                            "Hamza",
                            "Ali",
                            "Saad",
                            "Chikoo",
                            "Muddasar"
                        };

    char name[10];
    int authorized = 0;

    printf("Enter your name : ");
    if (fgets(name , sizeof name , stdin) == NULL)
    {
        printf("Unable to read the name.\n");
        return 1;
    }

    name[strcspn(name , "\n")] = '\0';
    
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(names[i] , name) == 0)
        {
            authorized = 1;
            break;
        }
        
    }

    if (authorized)
    {
        printf("Welcome! You can enter.");
    }
    else
    {
        printf("You can not enter!!");
    }

    return 0;
}

