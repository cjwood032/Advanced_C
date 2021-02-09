#include <stdio.h>
#include <setjmp.h>
#include <stdlib.h>
jmp_buf buf;
void error_recovery();
int main() 
{
    while(1)
    {
        if(setjmp(buf))
        {
            printf("we're back! a main function story");
            break;
        }
        error_recovery();
    }
    return 0;
}
void error_recovery()
{
    printf("there is an error");
    longjmp(buf, 1);
}