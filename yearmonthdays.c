//Write a C program to convert a given integer (in days) to years, months 
//and days, assumes that all months have 30 days and all years have 365 days
#include<stdio.h>
int main()
{
    system("cls");
    int d,y,m,d2;
    printf("Enter total numbers of days :");
    scanf("%d",&d);
    
    y=d/365;
    d=d-(y*365);
    m=d/30;
    d2=d-(m*30);

    printf("Years : %d\n month : %d\n days : %d\n",y,m,d2);
    return 0;
}