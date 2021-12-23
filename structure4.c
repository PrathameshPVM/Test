//create a structure array of 5 elements of employee structure.
#include <stdio.h>
#include<string.h>
struct emp
{
    int empid;
    char name[10];
};

int main()
{
    struct emp emp1[5];
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("Enter Employee ID :");
        scanf("%d",&emp1[i].empid);
        printf("\n Enter Employee Name :");
        scanf("%s",&emp1[i].name);
    }
    printf("\n -------------- EMPLOYEE DETAILS ----------------");
    printf("\n");

    for ( i = 0; i < 5; i++)
    {
        printf("\n----------------EMPLOPYEE %d  DETAILS ----------------------",i+1);
	
	printf("\n Employee ID : %d", emp1[i].empid);
	printf("\n Employee Name  : %s",emp1[i].name);
	printf("\n -------------------------------");

    }
    
    return 0;
}