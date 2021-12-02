//write a program to display 1 to 20 divisible by 4
#include<stdio.h>
void main()
{
    system ("cls");
    int i;
    i=1;
    while (i<=20)
    {
        if(i%4==0)
        {
            printf("%d\t",i);
        }
        i=i+1;
    }
    return 0;
}