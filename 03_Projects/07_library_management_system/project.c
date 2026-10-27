/*
TASK:
Build a menu-driven Library Management System backed by a text-file database.
Support adding, displaying, searching, modifying, issuing, and removing book records.
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_BOOKS 100

struct book
{
    int serial;
    int ISBN;
    char name[100];
    char author[100];
    int edition;
    char reserved[4];
}b[MAX_BOOKS];

void addBook(void);
void displayBook(void);
void searchBook(void);
void modifyBook(void);
void issueBook(void);
void removeBook(void);

int main(void)
{
    int choice;

    do
    {
        printf("\n\t___________________________________\n\n");
        printf("\t**** LIBRARY MANAGEMENT SYSTEM ****\n");
        printf("\t___________________________________\n\n");
        printf("\tMenu is....\n");
        printf("\t\t 1. Add book\n");
        printf("\t\t 2. Display book\n");
        printf("\t\t 3. Search book\n");
        printf("\t\t 4. Modify book\n");
        printf("\t\t 5. Issue book\n");
        printf("\t\t 6. Remove book\n");
        printf("\t\t 0. Quit code\n\n");

        printf("________Enter your choice : ");
        if (scanf("%d" , &choice) != 1)
        {
            printf("\n________Invalid numeric input !!\n");
            return 1;
        }

        switch (choice)
        {
        case 1:
            addBook();
            break;
        case 2:
            displayBook();
            break;
        case 3:
            searchBook();
            break;
        case 4:
            modifyBook();
            break;
        case 5:
            issueBook();
            break;
        case 6:
            removeBook();
            break;
        case 0:
            printf("\n________EXITING !!....\n\tTHANK YOU FOR USING OUR LIBRARY\n\n");
            break;
        default:
            printf("\n________Invalid Choice !!....\n\n");
            break;
        }
    } while (choice != 0);

    return 0;
}

void addBook(void)
{
    FILE *library = fopen("Library.txt" , "a");

    if (library == NULL)
    {
        printf("\n________Unable to open Library.txt !!\n");
        return;
    }

    printf("\nEnter Serial number of book : ");
    if (scanf("%d" , &b[0].serial) != 1 || b[0].serial < 1)
    {
        printf("Invalid serial number.\n");
        fclose(library);
        return;
    }
    printf("Enter ISBN number of book : ");
    if (scanf("%d" , &b[0].ISBN) != 1 || b[0].ISBN < 1)
    {
        printf("Invalid ISBN number.\n");
        fclose(library);
        return;
    }
    printf("Enter Name of book : ");
    if (scanf(" %99[^\n]" , b[0].name) != 1 || strchr(b[0].name , '|') != NULL)
    {
        printf("Invalid book name. The | character is not allowed.\n");
        fclose(library);
        return;
    }
    printf("Enter Author name : ");
    if (scanf(" %99[^\n]" , b[0].author) != 1 || strchr(b[0].author , '|') != NULL)
    {
        printf("Invalid author name. The | character is not allowed.\n");
        fclose(library);
        return;
    }
    printf("Enter Edition of book : ");
    if (scanf("%d" , &b[0].edition) != 1 || b[0].edition < 1)
    {
        printf("Invalid edition.\n");
        fclose(library);
        return;
    }
    printf("Is the book reserved (yes/not) : ");
    scanf("%3s" , b[0].reserved);

    if (strcmp(b[0].reserved , "yes") != 0 && strcmp(b[0].reserved , "not") != 0)
    {
        printf("Reservation status must be yes or not.\n");
        fclose(library);
        return;
    }

    fclose(library);
    library = fopen("Library.txt" , "r");
    if (library != NULL)
    {
        struct book existing;
        int count = 0;

        while (count < MAX_BOOKS && fscanf(library , "%d|%d|%99[^|]|%99[^|]|%d|%3s" , &existing.serial , &existing.ISBN , existing.name , existing.author , &existing.edition , existing.reserved) == 6)
        {
            if (existing.serial == b[0].serial || existing.ISBN == b[0].ISBN)
            {
                printf("A book with that serial number or ISBN already exists.\n");
                fclose(library);
                return;
            }
            count++;
        }
        fclose(library);

        if (count >= MAX_BOOKS)
        {
            printf("The library database has reached its %d-book limit.\n" , MAX_BOOKS);
            return;
        }
    }

    library = fopen("Library.txt" , "a");
    if (library == NULL)
    {
        printf("Unable to open Library.txt for writing.\n");
        return;
    }

    fprintf(library , "%d|%d|%s|%s|%d|%s\n" , b[0].serial , b[0].ISBN , b[0].name , b[0].author , b[0].edition , b[0].reserved);
    printf("\n\n________Book added successfully !!\n\n");
    fclose(library);
}

void displayBook(void)
{
    FILE *library = fopen("Library.txt" , "r");

    if (library == NULL)
    {
        printf("\n________Library database does not exist yet.\n");
        return;
    }

    int i = 0;
    while (i < MAX_BOOKS && fscanf(library , "%d|%d|%99[^|]|%99[^|]|%d|%3s" , &b[i].serial , &b[i].ISBN , b[i].name , b[i].author , &b[i].edition , b[i].reserved) == 6)
    {
        i++;
    }
    if (i == MAX_BOOKS)
    {
        printf("Only the first %d records can be displayed.\n" , MAX_BOOKS);
    }
    for (int j = 0; j < i; j++)
    {
        printf("\n\t---- Book %d Detail ----\n\n" , j+1);
        printf("\tSerial number =  %d\n" , b[j].serial);
        printf("\tISBN number   =  %d\n" , b[j].ISBN);
        printf("\tName of book  =  %s\n" , b[j].name);
        printf("\tAuthor's name =  %s\n" , b[j].author);
        printf("\tBook Edition  =  %d\n" , b[j].edition);
        printf("\tIs Reserved   =  %s\n" , b[j].reserved);
    }
    fclose(library);
}

void searchBook(void)
{
    FILE *library = fopen("Library.txt" , "r");

    if (library == NULL)
    {
        printf("\n________Library database does not exist yet.\n");
        return;
    }

    int i = 0;
    int choice;
    int found = 0;
    int ISBN;
    char name[100];
    char author[100];

    while (i < MAX_BOOKS && fscanf(library , "%d|%d|%99[^|]|%99[^|]|%d|%3s" , &b[i].serial , &b[i].ISBN , b[i].name , b[i].author , &b[i].edition , b[i].reserved) == 6)
    {
        i++;
    }

    printf("\nSearch Book by....\n\n\t1. ISBN Number\n\t2. Book Name\n\t3. Author Name\n");
    printf("\nEnter your choice : ");
    if (scanf("%d" , &choice) != 1)
    {
        printf("Invalid search choice.\n");
        fclose(library);
        return;
    }

    switch (choice)
        {
        case 1:
            printf("\n________Enter ISBN Number : ");
            if (scanf("%d" , &ISBN) != 1)
            {
                printf("Invalid ISBN.\n");
                break;
            }
            for (int j = 0; j < i; j++)
            {
                if (ISBN == b[j].ISBN)
                {
                    found = 1;
                    break;
                }
            }
            if (found)
            {
                printf("\n________________Book is Found.\n");
            }
            else
            {
                printf("\n________________Book not Found !!\n");
            }
            break;

        case 2:
            printf("\n________Enter Book Name : ");
            scanf(" %99[^\n]" , name);
            for (int j = 0; j < i; j++)
            {
                if (strcmp(name , b[j].name) == 0)
                {
                    found = 1;
                    break;
                }
            }
            if (found)
            {
                printf("\n________________Book is Found.\n");
            }
            else
            {
                printf("\n________________Book not Found !!\n");
            }
            break;

        case 3:
            printf("\n________Enter Author Name : ");
            scanf(" %99[^\n]" , author);
            for (int j = 0; j < i; j++)
            {
                if (strcmp(author , b[j].author) == 0)
                {
                    found = 1;
                    break;
                }
            }
            if (found)
            {
                printf("\n________________Book is Found.\n");
            }
            else
            {
                printf("\n________________Book not Found !!\n");
            }
            break;

        default:
            printf("\n________Invalid Choice !!\n");
            break;
        }

    fclose(library);
}

void modifyBook(void)
{
    FILE *library = fopen("Library.txt" , "r");

    if (library == NULL)
    {
        printf("\n________Library database does not exist yet.\n");
        return;
    }

    int i = 0;
    int found = 0;
    char oldname[100];
    char newname[100];

    while (i < MAX_BOOKS && fscanf(library , "%d|%d|%99[^|]|%99[^|]|%d|%3s" , &b[i].serial , &b[i].ISBN , b[i].name , b[i].author , &b[i].edition , b[i].reserved) == 6)
    {
        i++;
    }

    printf("\nEnter Book's old Name : ");
    scanf(" %99[^\n]" , oldname);
    printf("Enter Book's new Name : ");
    if (scanf(" %99[^\n]" , newname) != 1 || strchr(newname , '|') != NULL)
    {
        printf("Invalid book name. The | character is not allowed.\n");
        fclose(library);
        return;
    }

    for (int j = 0; j < i; j++)
    {
        if (strcmp(oldname , b[j].name) == 0)
        {
            strcpy(b[j].name , newname);
            found = 1;
            break;
        }
    }
    fclose(library);

    if (!found)
    {
        printf("\n________Book not found in Records !!\n");
        return;
    }

    library = fopen("Library.txt" , "w");

    if (library == NULL)
    {
        printf("\n________Unable to update Library.txt !!\n");
        return;
    }

    for (int j = 0; j < i; j++)
    {
        fprintf(library , "%d|%d|%s|%s|%d|%s\n" , b[j].serial , b[j].ISBN , b[j].name , b[j].author , b[j].edition , b[j].reserved);
    }

    printf("\n________Book Updated/Modified Successfully.\n");
    fclose(library);
}

void issueBook(void)
{
    FILE *library = fopen("Library.txt" , "r");

    if (library == NULL)
    {
        printf("\n________Library database does not exist yet.\n");
        return;
    }

    int i = 0;
    int found = 0;
    int alreadyIssued = 0;
    char need[100];

    while (i < MAX_BOOKS && fscanf(library , "%d|%d|%99[^|]|%99[^|]|%d|%3s" , &b[i].serial , &b[i].ISBN , b[i].name , b[i].author , &b[i].edition , b[i].reserved) == 6)
    {
        i++;
    }

    printf("\nEnter Book name that you want to Issue : ");
    scanf(" %99[^\n]" , need);

    for (int j = 0; j < i; j++)
    {
        if (strcmp(need , b[j].name) == 0)
        {
            found = 1;
            if (strcmp(b[j].reserved , "yes") == 0)
            {
                alreadyIssued = 1;
            }
            else
            {
                strcpy(b[j].reserved , "yes");
            }
            break;
        }
    }
    fclose(library);

    if (!found)
    {
        printf("\n________Book not found in Records !!\n");
        return;
    }

    if (alreadyIssued)
    {
        printf("\n________Book is already issued.\n");
        return;
    }

    library = fopen("Library.txt" , "w");

    if (library == NULL)
    {
        printf("\n________Unable to update Library.txt !!\n");
        return;
    }

    for (int j = 0; j < i; j++)
    {
        fprintf(library , "%d|%d|%s|%s|%d|%s\n" , b[j].serial , b[j].ISBN , b[j].name , b[j].author , b[j].edition , b[j].reserved);
    }

    printf("\n________Book Issued Successfully.\n");
    fclose(library);
}

void removeBook(void)
{
    FILE *library = fopen("Library.txt" , "r");

    if (library == NULL)
    {
        printf("\n________Library database does not exist yet.\n");
        return;
    }

    int i = 0;
    int found = 0;
    char bookToDelete[100];

    while (i < MAX_BOOKS && fscanf(library , "%d|%d|%99[^|]|%99[^|]|%d|%3s" , &b[i].serial , &b[i].ISBN , b[i].name , b[i].author , &b[i].edition , b[i].reserved) == 6)
    {
        i++;
    }
    fclose(library);

    printf("\nEnter Book name that you want to delete : ");
    scanf(" %99[^\n]" , bookToDelete);

    for (int j = 0; j < i; j++)
    {
        if (strcmp(bookToDelete , b[j].name) == 0)
        {
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("\n________Book not found in Records !!\n");
        return;
    }

    library = fopen("Library.txt" , "w");
    if (library == NULL)
    {
        printf("\n________Unable to update Library.txt !!\n");
        return;
    }

    for (int j = 0; j < i; j++)
    {
        if (strcmp(bookToDelete , b[j].name) != 0)
        {
            fprintf(library , "%d|%d|%s|%s|%d|%s\n" , b[j].serial , b[j].ISBN , b[j].name , b[j].author , b[j].edition , b[j].reserved);
        }
    }

    printf("\n________Book Deleted Successfully.\n");
    fclose(library);
}
