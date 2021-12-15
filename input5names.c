//program to accept 5 students name 
#include <stdio.h>
int main()
{
    system("cls");
    char n[5][10],i;
    for ( i = 0; i < 5; i++)
    {
        printf("Enter names of 5 students :");
        scanf("%s",&n[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        printf("\n%s",n[i]);
    }
    
    return 0;
}