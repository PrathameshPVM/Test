//Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
#include<stdio.h>
int main()
{
    system("cls");
    int s,h,m,s2;
    printf("Enter total numbers of seconds :");
    scanf("%d",&s);

    h=s/3600;
    m=(s-(h*3600))/60;
    s2=((s-(3600*h))-(m*60));

    printf("Total number of Hour : %d\n Minutes : %d Seconds : %d",h,m,s2);


}