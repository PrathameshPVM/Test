#include<stdio.h>
void main ()
{
    system("cls");
    int days,weeks,years;
    printf("Enter numbers of days=");
    scanf("%d",&days);

    years=days/365;
    weeks=(days%365)/7;
    days=days%weeks;

    printf("years: %d\n weeks: %d\n days:%d\n",years,weeks,days);

    return 0;
}