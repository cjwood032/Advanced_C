#include <stdio.h>
union car 
{
    int i_value;
    float f_value;
};
struct owner {
    char social[1];
};
struct leasecompany {
    char name[40];
    char headquarters[40];
};
struct car_data {
    char make[15];
    int status;
    union {
        struct owner owncar;
        struct leasecompany leasecar;
    };// anonymous union
};
struct 
{
    char *name;
    enum symbolType type;
    union
    {int i;
    float f;
    char c;
    } data;
}table [entries];
int main()
{
    union car car1, car2, *car3;//create 2 unions and a pointerf
    printf("Memory used: %zu\n", sizeof(car1));
    return 0;
}