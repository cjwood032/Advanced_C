#include <stdio.h>
#include <setjmp.h>
#include <stdlib.h>
jmp_buf buf;
int main()
{
    int i = setjmp(buf);
    printf("i=%d\n", i);
    if (i!=0) //frees us from the setjump longjump loop
        exit(0);
    longjmp(buf, 42); // will go back to setjump, creating an infinite loop;
    printf("Missed me!\n");
    return 0;
}