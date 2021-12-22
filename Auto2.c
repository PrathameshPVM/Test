//example of auto storage class 
#include <stdio.h>
void displaynum();
int main()
{
    int i;
    for (i=1;i<=5;i++)
    {
        auto int j=1;
        printf("\n j=%d",j+1);
    }
    //printf("\n value of j outside loop =%d",j);// error since j is declared inside for block
}
