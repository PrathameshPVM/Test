//Acceleration Formula
#include<stdio.h>
void main ()
{
    system("cls");
    int a,v,u,t;
    printf("Enter the Value of final velocity=");
    scanf ("%d",&v);
    printf("Enter the Value of initail velocity=");
    scanf ("%d",&u);
    printf("Enter the Value of time taken=");
    scanf ("%d",&t);
    a=v-u/t;

    printf("The Value of Acceleration=%d",a);
    
}