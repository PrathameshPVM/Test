//Frequency Formula
#include<stdio.h>
void main ()
{
    system("cls");
    int f,v,wl;
    printf("enter the value of velocity=");
    scanf("%d",&v);
    printf("enter the value of wavelength=");
    scanf("%d",&wl);

    f=v/wl;

    printf("The Value of Frequency is=%d",f);
    return 0;
}