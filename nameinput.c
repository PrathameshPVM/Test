//program to accept name 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    system("cls");
    char n[10],i;
    printf("Enter your name :");
    scanf("%s",&n);
    printf("The name is %s",n);
    for ( i = 0; i < 10; i++)
    {
        printf("\t%c",n[i]);
    }
    
    return 0;
}
