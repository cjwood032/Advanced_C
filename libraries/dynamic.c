#include <stdio.h>
void fun(void)
{
    printf("fun() called from a dynamic library\n");
}
int main()
{
    return 0;
}