#include <stdio.h>
#include <stdbool.h>
int main () 
{
    bool freedom = 0;
    goto top;
    mid:
        printf("stuck in the middle with you!\n");
        freedom = 1;
        goto top;
    end:
        printf("FREEDOM!");
        return 0;
    top:
        printf("we're at the top!\n");
        if(freedom)
            goto end;
        goto mid;
}