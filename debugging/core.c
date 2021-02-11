#include <stdio.h>
#include <stdlib.h>
int main() {
    char *str = NULL;
    str = "gg";
    *(str+1) = 'n';
    return 0;
}