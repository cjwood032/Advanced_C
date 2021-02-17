#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int pthread_create(pthread_t *thread, const pthread_attr_t *attr void *(*start_routine)(void*), void *arg); 
void * hello_ret(void * args)
{
   char * hello = strdup("Hello World!\n");
   return (void *) hello;
}
int main(int argc, char * argv[])
{
    char * str;
    pthread_t thread=0;
    pthread_create(&thread, NULL, hello_ret, NULL);
    pthread_join(thread, (void **) &str);
    printf("%s", str);  
    pthread_exit(NULL);
    return 0;
}