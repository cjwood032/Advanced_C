#include <pthread.h>
#include <stdio.h>
//int pthread_create(pthread_t *thread, const pthread_attr_t *attr void *(*start_routine)(void*), void *arg); 
void *print_message_function(void *ptr);
int counter=0;
int main()
{
    pthread_t thread1, thread2, thread3, thread4, thread5, thread6, thread7, thread8, thread9, thread10;
    char nm[]="Chris Wood";
    pthread_create(&thread1, NULL, print_message_function, (void*)(intptr_t) nm[0]);
    pthread_create(&thread2, NULL, print_message_function, (void*)(intptr_t) nm[1]);
    pthread_create(&thread3, NULL, print_message_function, (void*)(intptr_t) nm[2]);
    pthread_create(&thread4, NULL, print_message_function, (void*)(intptr_t) nm[3]);
    pthread_create(&thread5, NULL, print_message_function, (void*)(intptr_t) nm[4]);
    pthread_create(&thread6, NULL, print_message_function, (void*)(intptr_t) nm[5]);
    pthread_create(&thread7, NULL, print_message_function, (void*)(intptr_t) nm[6]);
    pthread_create(&thread8, NULL, print_message_function, (void*)(intptr_t) nm[7]);
    pthread_create(&thread9, NULL, print_message_function, (void*)(intptr_t) nm[8]);
    pthread_create(&thread10, NULL, print_message_function, (void*)(intptr_t) nm[9]);
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    pthread_join(thread3, NULL);
    pthread_join(thread4, NULL);
    pthread_join(thread5, NULL);
    pthread_join(thread6, NULL);
    pthread_join(thread7, NULL);
    pthread_join(thread8, NULL);
    pthread_join(thread9, NULL);
    pthread_join(thread10, NULL);
    
    pthread_exit(NULL);
    return 0;
}
void *print_message_function( void *ptr) {
    
    char message = (intptr_t) ptr;
    printf("%c\t%d\n",message,++counter);
    return NULL;
}