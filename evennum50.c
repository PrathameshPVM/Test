//Write a C program that prints all even numbers between 1 and 50 .
#include<stdio.h>
void main()
{
    system ("cls");
    int i;
    i=1;
    while (i<=50)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
        i=i+1;
    }
    return 0;
}