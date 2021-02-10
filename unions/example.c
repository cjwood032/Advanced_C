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
    //enum symbolType type;
    union
    {int i;
    float f;
    char c;
    } data;
}table /*[entries]*/;
int main()
{
    union car car1, car2, *car3;//create 2 unions and a pointerf
    car1.i_value=10;
    printf("i value used: %d\n",car1.i_value);
    car2.f_value = 255.90;
    printf("f value used: %.2f\n",car2.f_value);
    car1.f_value = 199.99;
    printf("i value used: %d\n",car1.i_value);
    printf("f value used: %.2f\n",car1.f_value);
    return 0;
}