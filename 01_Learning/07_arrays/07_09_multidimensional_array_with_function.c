/* Reads and displays a multidimensional array through a function. */


#include<stdio.h>
#include<conio.h>

void display(int a , int b , int s[a][b]);

int main()
{
    int n_students;
    int n_subjects;

    printf("Enter the number of students.\n");
    scanf("%d" , &n_students);

    printf("Enter the number of subjects.\n");
    scanf("%d" , &n_subjects);

    if (n_students <= 0 || n_subjects <= 0)
    {
        printf("Array dimensions must be positive.\n");
        return 1;
    }

    int dis[n_students][n_subjects];

    display(n_students , n_subjects , dis);

    return 0;
}

void display(int a , int b , int s[a][b])
{
    for (int i=0; i<a; i++)
    {
        for (int j=0; j<b; j++)
        {
            printf("Enter marks of student %d in subject %d.\n" , i+1 , j+1);
            scanf("%d" , &s[i][j]);
        }
        
    }
    

    for (int i=0; i<a; i++)
    {
        for (int j=0; j<b; j++)
        {
            printf("The marks of student %d in subject %d are %d.\n" , i+1 , j+1 , s[i][j]);
        }
        
    }
}
