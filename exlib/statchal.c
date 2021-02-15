#include "static_challenge.h"
#include <stdio.h>
int main() 
{
    char string[] = "Fishie fishie fishie, oh!";
    char str1[]= "Wherever I ";
    char str2[] = "did go!";
    int i = countString(string);
    concatString(str1, str2);
    return 0;
}