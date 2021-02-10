#include <stdio.h>
#include <stdarg.h>
int summarize(int count,...);
int main()
{
    int i1=5,i2=7, i3=12;
    int i4=10, i5=1, i6=8; 
    printf("the sum of the numbers is %d\n", summarize(2, 1, 2));
    printf("the sum of the numbers is %d\n", summarize(2, i1, i2));
    printf("the sum of the numbers is %d\n", summarize(5, i1, i2, i3, i4, i6));    
    return 0;
}
int summarize(int count,...)
{
    va_list parg;
    int sum =0;
    va_start(parg,count);
    for (int i=0; i< count; i++)
    {
        int num =va_arg(parg, int);
        sum+=num;
    }
    va_end(parg);
    return sum;
}