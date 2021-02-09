#include <stdio.h>
// convert binary to decimal and decimal to binary

const long seventh=10000000;
const long sixth=1000000;
const long fifth=100000;
const long fourth=10000;
const long third=1000;
const long second=100;
const long first=10;
const long zeroeth=1;
int convertBin2Dec(long long num);
long long convertDec2Bin(int num);
int main() {
    long long bin1 = 01001001;
    long long bin2 = 00100100;
    long long bin3 = 00101010;
    printf("%lld converted to decimal is: %d\n",bin1,convertBin2Dec(bin1));
    printf("%lld converted to decimal is: %d\n",bin2,convertBin2Dec(bin2));
    printf("%lld converted to decimal is: %d\n",bin3,convertBin2Dec(bin3));
    int dec1 = 11;
    int dec2 = 114;
    int dec3 = 97;
    printf("%d converted to binary is: %lli\n",dec1,convertDec2Bin(dec1));
    printf("%d converted to binary is: %lli\n",dec2,convertDec2Bin(dec2));
    printf("%d converted to binary is: %lli\n",dec3,convertDec2Bin(dec3));

    return 0;
}
int convertBin2Dec(long long num)
{
    int output=0;
    while (num>0)
    {
        if (num-seventh>=0)
        {
            num-=seventh;
            output+=128;
        }
        if (num-sixth>=0)
        {
            num-=sixth;
            output+=64;
        }
        if (num-fifth>=0)
        {
            num-=fifth;
            output+=32;
        }
        if (num-fourth>=0)
        {
            num-=fourth;
            output+=16;
        }
        if (num-third>=0)
        {
            num-=third;
            output+=8;
        }
        if (num-second>=0)
        {
            num-=second;
            output+=4;
        }
        if (num-first>=0)
        {
            num-=first;
            output+=2;
        }
        if (num-zeroeth>=0)
        {
            num-=zeroeth;
            output+=1;
        }
    } 
    return output;
}
long long convertDec2Bin(int num)
{
    long long output=0;
    while (num>0)
    {
        if (num-128>=0)
        {
            num-=128;
            output+=seventh;
        }
        if (num-64>=0)
        {
            num-=64;
            output+=sixth;
        }
        if (num-32>=0)
        {
            num-=32;
            output+=fifth;
        }
        if (num-16>=0)
        {
            num-=16;
            output+=fourth;
        }
        if (num-8>=0)
        {
            num-=8;
            output+=third;
        }
        if (num-4>=0)
        {
            num-=4;
            output+=second;
        }
        if (num-2>=0)
        {
            num-=2;
            output+=first;
        }
        if (num-1>=0)
        {
            num-=1;
            output+=zeroeth;
        }
    } 
    return output;
}