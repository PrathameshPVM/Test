//Write a c program that read 5 numbers and count the number of positive
//numbers and print the average of all positive numbers
#include<stdio.h>
void main()
{
    system("cls");
    int i,n1,n2,n3,n4,n5,pcount=0,add=0;
    float avg;
    printf("Enter 5 numbers :");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);

    if (n1 > 0) 
    {
        pcount=pcount+1;
        add=add+n1;
    }
    
    if (n2 > 0) 
    {
        pcount=pcount+1;
        add=add+n2;
    }
    if (n3 > 0) 
    {
        pcount=pcount+1;
        add=add+n3;
    }
    if (n4 > 0) 
    {
        pcount=pcount+1;
        add=add+n4;
    }
    if (n5 > 0) 
    {
        pcount=pcount+1;
        add=add+n5;
    }


avg = add / pcount;
printf("The number of positive numbers:%d\n",pcount );
printf("The average of all positive value is %f\n", avg);
return 0;
 }


