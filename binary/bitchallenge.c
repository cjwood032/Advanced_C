#include <stdio.h>
int main() 
{
    int input, output;
    int bitpos, bitStatus;
    printf("Enter a number:\n");
    scanf("%d", &input);
    printf("Enter a bit number to check and turn on (0-31):\n");
    scanf("%d", &bitpos);
    bitStatus = (input>>bitpos) & 1;
    output = (1<<bitpos) |input;
    printf("The %d bit is set to %d\n",bitpos,bitStatus);
    printf("The new number is %d\n",output);
    return 0;
}