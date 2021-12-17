//merge two input
#include <stdio.h>
#include<string.h>
int main()
{
    system("cls");
    char a[20],b[20];
    printf("Enter First Word :\t");
    scanf("%s",a);
    printf("Enter second Word :\t");
    scanf("%s",b);
    printf("Combined Two Input is %s",strcat(a,b));
    return 0;
}