#include <stdio.h>
// Challenge: read elements in a variable-length array and find the sum of the array elements.
int main()
{
    int summation(int array[], int len);
    int sum;
    size_t size = 0;
    printf("Enter the number of elements you wish to store:\n");
    scanf("%zd",&size);
    int values [size];
    for (int i =0; i<size; i++)
    {
        int temp;
        printf("Enter the number for element %d: ", i+1);
        scanf("%d",&temp);
        values[i]=temp;
    }
    sum = summation(values, size);
    printf("the sum was %d\n", sum);
    return 0;
}
int summation(int array[], int len)
{
    int sum = 0;
    for(int i = 0; i<len; i++)
        sum+=array[i];
    return sum;
}