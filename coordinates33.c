/*write a c program to read the coordinates(x,y) (in cartesian system) 
and find the quadrant to which it belongs (Quadrant-I,QuadrantII,QuadrantIII,QuadrantVI)*/
#include<stdio.h>
void main()
{
    system("cls");
    int x,y;
    printf("Enter x coordinate :");
    scanf("%d",&x);
    printf("Enter y coordinate :");
    scanf("%d",&y);

    if (x>0 && y>0)
    {
        printf("Point is in Quadrant-I");
    }
    else if (x>0 && y<0)
    {
        printf("Point is in Quadrant-II");
    }
    else if (x<0 && y<0)
    {
        printf("Point is in Quadrant-III");
    }else if (x<0 && y>0)
    {
        printf("Point is in Quadrant-IV");
    }
    else if (x==0 && y==0)
    {
        printf("Point is in Centre");
    }
    

}