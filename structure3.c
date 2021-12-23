//create a structure array of 10 elements of student strucure
#include <stdio.h>
#include <string.h>
struct stu
{
    int r;
    char n[30];
};

int main()
{
    struct stu s1[10];
    int i;
    for ( i = 0; i < 10; i++)
    {
        printf("Roll number :");
        scanf("%d",&s1[i].r);
        printf("Enter Name :");
        scanf("%s",&s1[i].n);
    }
    printf("\n");
    printf("\n------------ STUDENTS DETAILS -----------");
    printf("\n");

    for ( i = 0; i < 10; i++)
    {
        printf("\n ----------- STUDENT %d DETAILS ------------",i+1);
        printf("\n The Roll number is :%d",s1[i].r);
        printf("\n The Name is :%s",s1[i].n);
    }
    

    
    return 0;
}