#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
void sigstopex();
void alarmex();
void divzero();
void handler_dividebyzero(int signum);
int main() {
    //sigstopex();
    //alarmex();
    //divzero();
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
void divzero()
{
    int result = 0;
    int v1=121,v2=0;
    void (*sigHandlerReturn)(int);
    sigHandlerReturn = signal(SIGFPE/*<-signal floating point error*/,handler_dividebyzero);
    result = v1/v2;
    if (sigHandlerReturn==SIG_ERR){
        perror("signal error");
    }
}
void handler_dividebyzero(int signum) {
    if (signum==SIGFPE) {
        printf("Received SIGFPE, divided by zero!\n");
        exit(0);
    }
    else 
    {
        printf("got an error\n");
        return;
    }
}