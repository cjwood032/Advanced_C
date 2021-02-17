#include <pthread.h>
#include <stdio.h>
//int pthread_create(pthread_t *thread, const pthread_attr_t *attr void *(*start_routine)(void*), void *arg); 
void *print_message_function(void *ptr);

int main()
{
    pthread_t thread1, thread2;
    char *message1= "Thread 1";
    char *message2= "Thread 2";
    int iret1=0, iret2=0;
    iret1 = pthread_create(&thread1, NULL, print_message_function, (void*) message1);
    iret2 = pthread_create(&thread2, NULL, print_message_function, (void*) message2);
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    printf("Thread 1 returns %d\n", iret1);
    printf("Thread 2 returns %d\n", iret2);
    pthread_exit(NULL);
    return 0;
}
void *print_message_function( void *ptr) {
    char *message;
    message = (char *) ptr;
    printf("%s\n",message);
    return NULL;
}