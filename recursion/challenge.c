
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int sumRange(int n);
int gcd(int i, int j);
void reverse(char str[]);
int main()
{
    char str[]="abcdefghijk";
    printf("sum: %d\n",sumRange(5));
    printf("gcd: %d\n",gcd(144,256));
    reverse(str);
    return 0;
}

int sumRange(int n) {

int result = 0;
    if(n==0)
        result =0;
    else
        result = n+sumRange(n-1); 
    return result;
}
int gcd(int i, int j)
{
    if (j==0)
    {
        return i;
    }
    else 
        return gcd(j, i%j); 
}
void reverse(char *str)
{
    if(*str)
    {
        reverse(str+1);
        printf("%c",*str);
    }
}