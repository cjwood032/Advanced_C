
// program that takes two command line arguments, character and filename
// the program should print only the lines in the file containing the character
/*
1. Read the line
2. Check the line for the character
3. print the line if the character is found
4. read the next line, repeat 2-4
*/
#include <stdio.h>
#include <string.h>
#include <mm_malloc.h>
int has_ch(char ch, const char * line);
int main(int argc, char * argv[]) 
{
    if(argc!= 3)
    {
        puts("Argument error");
        exit(EXIT_FAILURE);
    }

    char hit =argv[1][0];
    char * buffer = NULL;
    FILE * file=NULL;
    if ((file=fopen(argv[2],"r"))==NULL)
    {
        puts("File opening error");
        exit(EXIT_FAILURE);
    }
    size_t buffsize =256;
    size_t characters;
    buffer = (char *)malloc(buffsize * sizeof(char));
    if( buffer==NULL) {exit(1);}
    while ( getline(&buffer, &buffsize, file)!=EOF)
    {
        if(has_ch(hit, buffer))
        printf("character was found in line: '%s'\n", buffer);
    }
   fclose(file);
    return 0;

}
int has_ch(char ch, const char * line)
{
    while(*line)//goes through each char of the line
        if(ch==*line++)
            return 1;
        

    return 0;
}