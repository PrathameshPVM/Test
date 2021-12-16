//function to calculate circumference , area and volume of a circle
#include<stdio.h>
void cir(float);
int main()
{
    float r;
    printf("Enter Radius to find Circumfarance ,area and volume of a circle :");
    scanf("%f",&r);
    cir(r);
    return 0;
}
void cir(float r)
{
    float c,a,v;
    c=2*3.14*r;
    a=3.14*r*r;
    v=4/3.0*3.14*r*r*r;
    printf("Circumfaranceof a circle is %.2f\n",c);
    printf("area of a circle is %.2f\n",a);
    printf("volume of a circle is %.2f\n",v);


}