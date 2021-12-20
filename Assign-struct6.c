/*create a structure employee having members empno,empname , salary , designation
6 - repeat the above program accepting values from the user for 3 different employees.*/
#include <stdio.h>
#include<string.h>
struct emp
{
    int no;
    char n[50];
    float s;
    char d[50];
}emp;

int main()
{
    printf("Enter Employee number :");
    scanf("%d",&emp.no);
    printf("Enter Employee Name :");
    scanf("%s",&emp.n);
    printf("Enter Employee Salary :");
    scanf("%f",&emp.s);
    printf("Enter Employee Designation :");
    scanf("%s",&emp.d);

    printf("\n-------EMPLOYEE INFO--------");
    printf("\nEmployee Number :%d",emp.no);
    printf("\nEmployee Name :%s",emp.n);
    printf("\nEmployee Salary :%d",emp.s);
    printf("\nEmployee Designation :%s",emp.d);



    return 0;
}
