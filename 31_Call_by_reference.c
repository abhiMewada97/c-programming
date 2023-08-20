#include <stdio.h>

void changeValue(int *address)
{
    *address = 2323;
}

int main()
{
    int a=12;
    printf("The value of a is %d\n",a);
    changeValue(&a);
    printf("The change value of a is %d",a);

    return 0;
}