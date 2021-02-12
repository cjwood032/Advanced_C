#include <stdio.h>
int main() 
{
    int a = 10;
    int *p1 = NULL;
    int ** p2 = NULL;
    p1= &a;
    p2 = &p1;
    printf("Address of a = %p\n", &a);
    printf("Address of p1 = %p\n", &p1);
    printf("Address of p2 = %p\n", &p2);
    printf("value of a = %u\n", a);
    printf("value of stored p1 = %u\n", *p1);
    printf("value of stored stored p2 = %u\n", **p2);
    return 0;
}
