#include <stdio.h>
#include <string.h>
#include <mm_malloc.h>
int main ()
{
    char * buffer = NULL;
    size_t buffsize =32;
    size_t characters;
    buffer = (char *)malloc(buffsize * sizeof(char));
    if( buffer==NULL) {exit(1);}
    printf("Type something: ");
    characters = getline(&buffer, &buffsize, stdin);
    printf("%zu characters were read.\n", characters);
    printf("You typed: '%s'\n", buffer);
    return 0;
}