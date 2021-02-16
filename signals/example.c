#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
void sigstopex();
void alarmex();
int main() {
    //sigstopex();
    alarmex();
    return 0;
}
void sigstopex()
{
    printf("Testing SIGSTOP\n");
    raise (SIGSTOP);
    printf("I'm BAAAAACK!\n");
}
void alarmex()
{
    alarm(5);
    for (int i =1; i<10; i++)
    {
        printf("%d\n",i);
        sleep(1);
    }
}