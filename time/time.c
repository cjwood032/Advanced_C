#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void example1()
{
    time_t ct;
    time(&ct);
    printf("%s\n",ctime(&ct));
}
void example2 ()
{
    float n = time(NULL);
    printf("%.2f\n",n);
}
void example3() 
{
    double d;
    d=difftime(3,16);
    printf("%.2f\n",d);
}
int main() {
    example3();
    return 0;
}
