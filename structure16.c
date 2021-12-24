//create a structure account having members accountno,
//name, balance 
#include <stdio.h>
#include<string.h>
int main()
{
    struct acut
    {
        int ano;
        char an[30];
        int ab;
    }e1;
    printf("Enter 1.Account Number :\n 2.Account Holder Name :\n 3.Account Balance :\n ");
    scanf("%d%s%d",&e1.ano,&e1.an,&e1.ab);
    printf("\n");
    printf("\n------------Employee Details--------------");
    printf("\n");

    printf("\n 1.Account Number :%d \n2.Account Holder Name :%s \n3.Account Balance :%d ",e1.ano,e1.an,e1.ab);

    
    return 0;
}