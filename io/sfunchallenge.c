#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int IsPrime(int number);
int main() {
    FILE *fp = NULL;
    
    int num;
    if((fp=fopen("numbers.txt","r"))==NULL)
    {
        printf("File opening error");
        exit(1);
    }
    while (fscanf(fp, "%d", &num)!=EOF)
    {
        if(num%2==0)
        {
            printf("EVEN: %d\n",num);
        }
        else
        {
            printf("ODD: %d\n",num);
        }
        if(IsPrime(num))
        {
            printf("Prime: %d\n",num);
        }
    }
    fclose(fp);
    return 0;
}
int IsPrime(int number) {
    int i;
    for (i=2; i<number; i++) {
        if (number % i == 0 && i != number) return 0;
    }
    return 1;
}