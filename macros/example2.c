#include <stdio.h>
#define PI 3.141592654
#define CIRCLE_AREA(x) ((PI) *(x) * (x))

int main() 
{
    int area = CIRCLE_AREA(4);
    printf("%d\n",area);
    area =CIRCLE_AREA(6);
    printf("%d\n",area);
    return 0;
}