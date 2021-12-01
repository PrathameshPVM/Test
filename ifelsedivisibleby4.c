//check a number if it is divisible by 4
#include<stdio.h>
void main()
{
    system("cls");
    int num,r;
    printf("Enter a number to check if it is divisible by 4=");
    scanf("%d",&num);

    r=num%4;

    if (r==0)
    {
      printf("the number is divisible by 4");

    }
    if(r!=0)
    {
        printf("the number is not divisible by 4");
    }

}