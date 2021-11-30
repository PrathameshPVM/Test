//ohms law
#include<stdio.h>
void main ()
{
    system("cls");
    int v,i,r;
    printf("Enter the Value of current=");
    scanf ("%d",&i);
    printf("Enter the Value of resistance");
    scanf ("%d",&r);
    v=i*r;

    printf("The Value of voltage is=%d",v);
    
}