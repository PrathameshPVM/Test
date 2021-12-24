//create a structure employee having members 
//empno,empname,salary, designation
#include <stdio.h>
#include<string.h>
int main()
{
    struct emp
    {
        int eno;
        char en[30];
        int es;
        char ed[30];
    }e1;
    printf("Enter 1.Employee Number :\n 2.Employee Name :\n 3.Employee Salary :\n 4.Employee Designation :\n");
    scanf("%d%s%d%s",&e1.eno,&e1.en,&e1.es,&e1.ed);
    printf("\n");
    printf("\n------------Employee Details--------------");
    printf("\n");

    printf("\n 1.Employee Number :%d \n2.Employee Name :%s \n3.Employee Salary :%d \n4.Employee Designation :%s",e1.eno,e1.en,e1.es,e1.ed);

    
    return 0;
}