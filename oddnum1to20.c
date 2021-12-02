//WAP to display odd number from 1 to 20
#include<stdio.h>
void main()
{
    system ("cls");
    int i;
    i=1;
    while (i<=20)
    {
        if(i%2!=0)
        {
            printf("%d\t",i);
        }
        i=i+1;
    }
    return 0;
}