
//strrev
#include <stdio.h>
#include<string.h>
int main()
{
    system("cls");
    char n1[20],n2[20];
    int r;
    puts("Enter name");
    gets(n1);
    strcpy(n2,strrev(n1));
    printf("The reverse of enterd string is %s",n2);
    
    return 0;
}