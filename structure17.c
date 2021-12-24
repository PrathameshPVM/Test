/*create a structure account having members accountno,
name, balance 
create a function getaccount which return structure*/
#include <stdio.h>
#include<string.h>
struct acut
    {
        int ano;
        char an[30];
        int ab;
    };
    struct acut getaccount()
    {
        struct acut e1;
        printf("Enter 1.Account Number :\n 2.Account Holder Name :\n 3.Account Balance :\n ");
        scanf("%d%s%d",&e1.ano,&e1.an,&e1.ab);
        return e1;
    };
    
int main()
{
    struct acut e2;
    e2=getaccount();
    printf("\n");
    printf("\n------------Employee Details--------------");
    printf("\n");

    printf("\n 1.Account Number :%d \n2.Account Holder Name :%s \n3.Account Balance :%d ",e2.ano,e2.an,e2.ab);

    
    return 0;
}
