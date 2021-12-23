#include <stdio.h>
enum weekdays {sunday=1,monday,tuesday, Wednesday, Thursday, Friday, Saturday};
int main()
{
    enum weekdays w;
    w=monday;
    printf("The value of monday is %d",w);

    return 0;
}