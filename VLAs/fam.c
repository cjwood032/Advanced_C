//flexible array members
#include <stdio.h>
#include <mm_malloc.h>
#include <time.h>
struct s {
    int arraySize;
    int array[];
};
int main() {
    int desiredSize;
    time_t t;
    srand((int) time(&t));
    printf("Enter the number of elements you wish to store:\n");
    scanf("%d",&desiredSize);
    struct s *ptr;
    ptr = malloc(/*{*/ sizeof(struct s)/*}size of the rest of s*/ +/*{*/desiredSize * sizeof(int)/*}size of flexible array int*/);
    for (int i=0; i< desiredSize; i++)
    {
     ptr->array[i]=rand() %100;
    }
    for (int i=0; i<desiredSize; i++)
    {
        printf("the %d element was %d\n",i+1,ptr ->array[i]);
    }
    free(ptr);
}