/*5 - create a structure employee having members empno,empname , salary , designation*/
#include <stdio.h>
#include<string.h>
struct emp
{
    int no;
    char n[50];
    int s;
    char d[50];
}emp;

int main()
{
    emp.no=11111111;
    strcpy(emp.n,"Pratham");
    emp.s=25000;
    strcpy(emp.d,"Manager");

    printf("\n-------EMPLOYEE INFO--------");
    printf("\nEmployee Number :%d",emp.no);
    printf("\nEmployee Name :%s",emp.n);
    printf("\nEmployee Salary :%d",emp.s);
    printf("\nEmployee Designation :%s",emp.d);



    return 0;
}