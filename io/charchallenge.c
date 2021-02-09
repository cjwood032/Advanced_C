#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argv[])
{
    FILE * fp = NULL;
    char ch='\0';
    int wrd=1, chr=1;
    if (argc==1)
        fp=stdin;
    else if (argc==2)
    {
        if((fp=fopen(argv[1], "r"))==NULL)
        {
            fprintf(stderr, "can't open %s\n", argv[1]);
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        fprintf(stderr, "can't open %s\n", argv[1]);
            exit(EXIT_FAILURE);
    }
    while(ch!=EOF)
    {
        if(ch==' '||ch=='\n')
            wrd++;
        else
            chr++;
        ch=getc(fp);
    }
    printf("there are %d words and %d chars in the input", wrd-1, chr-1);
    return 0;
}