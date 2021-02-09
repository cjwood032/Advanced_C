#include <stdio.h>

int main() 
{
    char ch= 0;
    while (isspace(ch = (char)getchar())); //loop until first non-space char is pulled
        ungetc(ch,stdin); //returns that char to the string
    printf("char is %c\n", getchar());
    return 0;
}