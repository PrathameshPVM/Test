#include <stdio.h>
#include<string.h>
union data
{
    int i;
    float f;
    char str[20];
};

int main()
{
    union data d;
    printf("\n Memory size occupied by data : %d",sizeof(d));
    return 0;
}