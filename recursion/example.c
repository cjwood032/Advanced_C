
#include <stdlib.h>
#include <stdio.h>
int factorialF(int n);
int main()
{
    printf("%d\n",factorialF(5));
    return 0;
}

int factorialF(int n) {

int result = 0;
    if(n==0)
        result =1;
    else
        result = n*factorialF(n-1); 
    return result;
}
