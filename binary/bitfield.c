#include <stdio.h>
struct packed_struct
{
    unsigned int :3; //pad by 3
    unsigned int f1:1;
    unsigned int f2:1;
    unsigned int f3:1;
    unsigned int type:8;
    unsigned int index:18;
};

int main() 
{
    struct packed_struct packed_data;
    packed_data.type=7;
    unsigned int b = packed_data.type;
    
    return 0;
}