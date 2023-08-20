#include <stdio.h>

int myfunc(int a, int b)
{
    // int sum;
    // sum = a + b;
    extern int sum;
    return sum;
}

int sum = 443,z=9;
int main()
{
    // extern int i;
    // i=89;
    int sum = myfunc(3,5);
    printf("The sum is %d\n",sum);
    printf("The sum is %d",z);
    // printf("The sum is %d",i);   //Error , i is undefine

    return 0;
}