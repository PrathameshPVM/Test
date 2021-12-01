//write a program to enter the age of 3 person and find the greater one
#include<stdio.h>
void main()
{
    system("cls");
    int a1,a2,a3;
    printf("Enter the age of 3 persons=");
    scanf("%d",&a1);

    printf("Enter the age of 2nd person=");
    scanf("%d",&a2);
    
    printf("Enter the age of 3rd person=");
    scanf("%d",&a3);

    if (a1>a2&&a1>a3)
    {
        printf("Person 1 is greater");
    }
    else if (a2>a1&&a2>a3)
    {
        printf("Person 2 is greater");
    }
    else
    {
        printf("Person 3 is greater");
    }
    return 0;
    }