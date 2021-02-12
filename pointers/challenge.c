#include <stdio.h>
#include <string.h>
#include <mm_malloc.h>
int array1[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
int array2[] = {38, 27, 87, 63, 59, 223, 132, 1, 19, 7};

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }
int call();
int main()
{
    int i = 0;
    int count = 0;
    int (*pfunc)();
    while (i != 5)
    {

        i = call();
        switch (i)
        {
        case 1:
            pfunc = add;
            break;
        case 2:
            pfunc = sub;
            break;
        case 3:
            pfunc = mul;
            break;
        case 4:
            pfunc = divide;
            break;
        default:
            i=5;
            break;
        }
        if (i != 5)
        {
            puts("Results are: \n");
            for (count = 0; count < 10; count++)
            {
                printf("%d\t",(*pfunc)(array1[count],array2[count]));
            }
            puts("\n");
        }
    }
    puts("bye!");
    return 0;
}
int call()
{
    int i = 5;
    puts("Which operation would you like to perform?\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Quit\n");
    scanf("%i", &i);
    return i;
}
