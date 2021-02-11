#include <stdio.h>
#define SUM(a,b)\
printf("%d + %d = %d\n",a,b,a + b);
#define SQR(a)\
printf("%d * %d = %d\n",a,a,a * a)
#define CUBE(a)\
printf("%d * %d * %d = %d\n",a,a,a,a * a * a);;
void challenge1();
void challenge2();
void challenge3();
int main()
{
    //challenge1();
    //challenge2();
    challenge3();
    return 0;
}
void challenge1()
{
    printf("file is: %s\n",__FILE__);
    printf("line is: %d\n",__LINE__);
    printf("date is: %s\n",__DATE__);
    printf("time is: %s\n",__TIME__);
    printf("stdc is: %d\n",__STDC__);
}
void challenge2()
{
    SUM(2,2);
    SUM(100,250);
    int i,j;
    puts("enter first number:\n");
    scanf("%d",&i);
    puts("enter second number:\n");
    scanf("%d",&j);
    SUM(i,j);
}
void challenge3()
{
    SQR(2);
    CUBE(2);
     int i;
    puts("enter a number:\n");
    scanf("%d",&i);
    SQR(i);
    CUBE(i);
}