//goto statement - will take the control to label defined skipping statement 
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    if (num==1)
    {
        goto label1;
    }
    else if (num==2)
    {
        goto label2;
    }
    else 
    goto label3;

    label1:
    printf("\n number is 1");
    label2:
    printf("\n number is 2");
    label3:
    printf("\n bye");
    return 0;
}