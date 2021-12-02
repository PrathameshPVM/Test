#include<stdio.h>
int main()
{
    system("cls");
    float w1, w2, n1, n2, avg;
    printf("Weight of item1: ");
    scanf("%f", &w1);
    printf("Weight of item2: ");
    scanf("%f",&w2);
    printf("No of item1 purchases: ");
    scanf("%f", &n1);
    printf("No of item2 purchases: ");
    scanf("%f", &n2);
    avg = ((w1 * n1) + (w2 * n2)) / (n1 + n2);
    printf("Average value = %f",avg);
    return 0;
}