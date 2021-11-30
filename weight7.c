//Weight Formulae
#include<stdio.h>
void main ()
{
    system("cls");
    int w,m,g;
    printf("Enter the mass of body=");
    scanf("%d",&m);
    printf("Enter acceleration due to gravity=");
    scanf("%d",&g);

    w=m*g;

    printf("The value of weight is=%d",w);

}