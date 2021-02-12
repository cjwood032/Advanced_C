#include <stdio.h>
#include <mm_malloc.h>
#include <string.h>

void foo(int *ptr1, int *ptr2)
{
    int a=5;
    ptr1 = &a;
    *ptr2 = a;
    printf("pointer 1 value in foo is %d\n", *ptr1);
    printf("pointer 2 value in foo is %d\n", *ptr2);
}
void bar (int **ptr1)
{
    int a=7;
    *ptr1 = &a;
    printf("pointer 1 value in foo is %d\n", **ptr1);
}
void exmaple1() 
{
    int *ptr1 = NULL;
    int *ptr2 = NULL;
    ptr1 = (int *) malloc(sizeof(int));
    ptr2 = (int *) malloc(sizeof(int));
    *ptr1 = 10;
    *ptr2 = 10;
    printf("pointer 1 value before foo is %d\n", *ptr1);
    printf("pointer 2 value before foo is %d\n", *ptr2);
    foo(ptr1, ptr2);
    printf("pointer 1 value after foo is %d\n", *ptr1);
    printf("pointer 2 value after foo is %d\n", *ptr2);
    bar(&ptr1);
    printf("pointer 1 value after bar is %d\n", *ptr1);
}

void charp(char **ptr)
{
    *ptr = malloc(255);
    strcpy(*ptr,"Hello Seattle!");
}
void example2() 
{
    char *ptr =NULL;
    charp(&ptr);
    printf("%s\n", ptr);
    free(ptr); 
}
int main() 
{
    //exmaple1();
    example2();
    return 0;

}