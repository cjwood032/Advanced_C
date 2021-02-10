#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41
void firstexample();
void secondexample();
void thirdexample();
void fourthexample();
void fifthexample();
int main() 
{
    //firstexample();
    //secondexample();
    //thirdexample();
    //fourthexample();
    fifthexample();
    return 0;
}
void firstexample()
{
    char string[100];
    int a=10, b=20, c=0;
    c=a+b;
    sprintf(string, "Hello, this is the sum number: %d", 55);
    sprintf(string, "Hello, this is the sum : %d of %d & %d", c, a, b);
    puts(string);
}
void secondexample()
{
    FILE *f =NULL;
    char ch[100];
    char ch0[100];
    if((f=fopen("file2.txt","r+"))==NULL)
    {
        printf("File opening error");
        exit(1);
    }
    for (int i=0; i<10;i++)
    {
        fprintf(f, "the count number is %d\n",i+1);
    }
    fclose(f);
    if((f=fopen("file2.txt","r+"))==NULL)
    {
        printf("File opening error");
        exit(1);
    }
    while(!feof(f))
    {
        fgets(ch,100,f);
        if (strcmp(ch0,ch)!=0)
            printf("%s",ch);
        //instuctor "if you run it on linux it shouldn't put 10 twice"
        //my fix was to store the last ch and compare
        strcpy(ch0,ch);
    }
    fclose(f);
}
void thirdexample()
{
    FILE *fp = NULL;
    char buff[255];
    if((fp=fopen("file.txt","r"))==NULL)
    {
        printf("File opening error");
        exit(1);
    }
    while (fscanf(fp, "%s", buff)!=EOF)
    {
        printf("%s\n",buff);
    }
    fclose(fp);
}
void fourthexample() 
{
     FILE *fp = NULL;
    char words[MAX];
    if((fp=fopen("file2.txt","a+"))==NULL)
    {
        printf("File opening error");
        exit(1);
    }
    
    puts("enter words, or '#' to exit");
    while ((fscanf(stdin, "%40s", words)==1)&&(words[0] != '#'))
        fprintf(fp, "%s\n", words);

    rewind(fp);
    puts("file contents are now:");
    while (fscanf(fp,"%s", words)==1)
        puts(words);
    fclose(fp);
}
void fifthexample()
{
    char *str = "Chris W. 35";
    char name[10], title[10];
    int age=0, ret = 0;
    ret = sscanf(str, "%s %s %d", name, title, &age);
    printf("Name: %s\n", name);
    printf("title: %s\n", title);
    printf("age: %d\n", age);
}