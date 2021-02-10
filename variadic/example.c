#include <stdio.h>
#include <stdarg.h>
#include <math.h>
double average(double v1, double v2, ...);
double samplestddev(int count, ...);
void first(); // basic variadit
void second(); //va_copy
int main() 
{
    //first();
    second();
    return 0;
}

void first() 
{
    double v1 = 10.5, v2 = 2.5;
    int num1 = 6, num2 =5;
    long num3 = 12L, num4=20L;
    printf("Average = %.2lf\n", average(v1, 3.5, v2, 4.5, 0.0));
    printf("Average = %.2lf\n", average(1.0,2.0,0.0));
    printf("Average = %.2lf\n", average((double)num2, v2, (double)num1, (double)num4, (double)num3, 0.0));
    // 0.0 is not counted, it is the terminator for the average function;fin
}
double average(double v1, double v2, ...)
{
    va_list parg;
    double sum = v1 + v2;
    double value = 0.0;
    int count = 2;
    va_start(parg,v2);
    while ((value=va_arg(parg,double))!=0.0)
    {
        sum +=value;
        count++;
    }
    va_end(parg);
    return sum/count;
}
void second()
{
    printf("%f\n",samplestddev(4, 25.0, 27.3, 26.9, 25.7));
    printf("%f\n",samplestddev(2, 25.0, 50.0));
}
double samplestddev(int count, ...)
{
    va_list parg;
    double sum = 0;
    va_start(parg, count);
    va_list parg2;
    va_copy(parg2, parg);
    for (int i=0; i< count; i++)
    {
        double num =va_arg(parg, double);
        sum+=num;
    }
    va_end(parg);
    double mean = sum/count;
    double std = 0;
    for (int i=0; i<count; i++)
    {
        double num = va_arg(parg2, double);
        std+= (num-mean)*(num-mean);
    }
    va_end(parg2);
    return sqrt(std/count);

}