#include <pthread.h>
#include <stdio.h>
//int pthread_create(pthread_t *thread, const pthread_attr_t *attr void *(*start_routine)(void*), void *arg); 
void * hello_fun()
{
    printf("Hello World!\n");
    return NULL;
}
int main(int argc, char * argv[])
{
    pthread_t thread=0;
    pthread_create(&thread, NULL, hello_fun, NULL);
    pthread_join(thread, NULL);//if this is added we can get hello_fun without the exit.
    pthread_exit(NULL);//if this is gone (with no pthread_join) the hello_fun will not execute before the program exits.
    return 0;
}