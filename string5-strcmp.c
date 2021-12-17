//C String function – strcmp
#include <stdio.h>
#include <string.h>
int main()
{
    char n1[20],n2[20];
    puts("Enter first name :");
    gets(n1);
    puts("Enter second name :");
    gets(n2);
    int r=strcmp(n1,n2);
    if (r==0)
    {
        printf("String are Equal");
    }
    else
    printf("String are unequal");
    
    return 0;
}