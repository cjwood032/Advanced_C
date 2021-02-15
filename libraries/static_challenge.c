#include <stdio.h>
#include <string.h>
int countString(char str[])
{
    _Bool ended = 0;
    int counter = 0;
    while (ended!=1)
    {
        if (str[counter]=='\0')
        {
            ended = 1;
            break;
        }
        else
        {
            counter++;
        }
    }
    return counter;
}
void concatString(char str1[], char str2[])
{
    int str1len;
    int str2len;
    str1len = countString(str1);
    str2len = countString(str2);
    int str3len = str1len+str2len;
    char str3[str3len];
    for (int i = 0; i<= str1len; i++)
    {
            str3[i]=str1[i];
    }
    for (int i = 0; i<= str2len; i++)
    {
            str3[i+str1len]=str2[i];
    }
    printf("%s concatenated with %s\nproduced %s\n", str1, str2, str3);

}