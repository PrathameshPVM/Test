/*create a structure employee having members empno,empname,salary, designation
create a function getemployee which return structure*/
#include <stdio.h>
#include<string.h>
 struct emp
    {
        int eno;
        char en[30];
        int es;
        char ed[30];
    };
    struct emp e()
    {
       struct emp e1;
        printf("Enter 1.Employee Number :\n 2.Employee Name :\n 3.Employee Salary :\n 4.Employee Designation :\n");
        scanf("%d%s%d%s",&e1.eno,&e1.en,&e1.es,&e1.ed);
        return e1;
    };
    

int main()
{
   
    struct emp e2;
    e2=e();
    printf("\n");
    printf("\n------------Employee Details--------------");
    printf("\n");

    printf("\n 1.Employee Number :%d \n2.Employee Name :%s \n3.Employee Salary :%d \n4.Employee Designation :%s",e2.eno,e2.en,e2.es,e2.ed);

    
    return 0;
}
