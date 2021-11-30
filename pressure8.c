//pressure formulae
#include<stdio.h>
void main ()
{
    system ("cls");
    int p,f,a;
    printf("enter total force applied=");
    scanf("%d",&f);
    printf("enter total area of object=");
    scanf("%d",&a);

    p=f/a;

    printf("the value of pressure=%d",p);

}