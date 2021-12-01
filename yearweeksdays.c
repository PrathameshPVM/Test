//Write a C program to convert specified days into years, weeks and days.
#include<stdio.h>
void main ()
{
    system("cls");
    int days,weeks,years;
    printf("Enter numbers of days=");
    scanf("%d",&days);

    years=days/365;
    weeks=(days%365)/7;
    days=days-((years*365)+(weeks*7));

    printf("years: %d\n weeks: %d\n days:%d\n",years,weeks,days);

    return 0;
}