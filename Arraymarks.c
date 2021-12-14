//Enter Marks of 5 subjects
#include <stdio.h>
int main()
{
    system("cls");
    int a[4],c=1;
    printf("Enter marks of 5 subjects :");
    for (int i = 0; i <= 4; i++)
    {
        
        scanf("%d",&a[i]);
    }
    for (int i = 0; i <= 4; i++)
    {

        printf("Subject %d %d\n",c,a[i]);
        c++;
    }
    
    
    return 0;
}