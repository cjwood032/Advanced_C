#include <stdio.h>

int somedisplay();
void function(int);
void otherfunction(int);
typedef void FuncType(int);
int main()
{
    int (*funcP)();
    funcP=somedisplay;
    printf("Address of func is %p\n", funcP);
    (*funcP)(); //invoke the function
    FuncType *pfunc =NULL;
    pfunc = function;
    (*pfunc)(10);
    pfunc=otherfunction;
    (*pfunc)(5);
    return 0;
}
int somedisplay()
{
    puts("some text");
    return 0;
}
void function (int i)
{
    printf("%d\n", i);
}
void otherfunction (int i)
{
    printf("%d\n", i);
}