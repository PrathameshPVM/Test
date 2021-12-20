//create a structure student having members rno,name,city,state
//4- repeat the above program accepting values from the user for students
#include<stdio.h>
#include<string.h>
struct std
{
    int r;
    char n[30];
    char c[30];
    char s[30];
};
int main()
{
    system("cls");
    struct std s1;

    printf("Enter Roll no :");
    scanf("%d",&s1.r);
    printf("Enter Name :");
    scanf("%s",&s1.n);
    printf("Enter City :");
    scanf("%s",&s1.c);
    printf("Enter state :");
    scanf("%s",&s1.s);

    printf("\n---------STUDENT INFO-----------");

    printf("\nRoll number :%d",s1.r);
    printf("\nName :%s",s1.n);
    printf("\nCity :%s",s1.c);
    printf("\nState :%s",s1.s);
    
    return 0;
}

