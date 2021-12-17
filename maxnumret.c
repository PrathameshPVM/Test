/*Given below is the source code for a function called max(). 
This function takes two parameters a and b and returns the 
maximum value between the two −
 function returning the max between two numbers */
#include<stdio.h>
int m(int a,int b);
main()
{
    system("cls");
    int a,b,r;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    r=m(a,b);
    printf("\nThe Maximum number is :%d",r);
    return 0;
}
int m(int a,int b)
{
    int r;
    if (a>b)
    {
        r=a;
    }
    else
    r = b;
    return (r);
}
