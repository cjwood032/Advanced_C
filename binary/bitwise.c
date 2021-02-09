#include <stdio.h>
int main () 
{
    short int w1 = 25; //0000000000011001
    short int w2 = 77; //0000000001001101
    short int w3 = 0;
    w3=w1&w2;
    printf ("& is: %d\n",w3);
    w3 = w1 | w2;
    printf ("| is: %d\n",w3);
    w3 = w1^ w2;
    printf ("^ is: %d\n",w3);
    w3 = ~w1;
    printf ("~w1 is: %d\n",w3);
    w3=~w2;
    printf ("~w2 is: %d\n",w3);
    w3 = w1<<1;
    printf ("w1 left shifted 1 is: %d\n",w3);
    w3 = w1>>1;
    printf ("w1 right shifted 1 is: %d\n",w3);
    w3 = w2<<1;
    printf ("w2 left shifted 1 is: %d\n",w3);
    w3 = w2>>1;
    printf ("w2 right shifted 1 is: %d\n",w3);
    return 0;
}
