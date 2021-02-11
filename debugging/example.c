#include <stdio.h>
#include <stdlib.h>
#ifdef DEBON
    #define DEBUG(level,fmt, ...) \
    if(Debug>= level) \
    fprintf(stderr, fmt, __VA_ARGS__)
#else
#define DEBUG(level,fmt,...)
#endif
int process (int i, int j)
{
    int val= 0;
    DEBUG(1,"process(%d, %d)\n", i, j);
    val = i * j;
    DEBUG(1,"return %d\n",val);
    return val;
}

int main()
{
    int i, j, nread;
    nread = scanf("%d %d", &i, &j);
    
    printf("%d\n", process(i,j));
    return 0;
}