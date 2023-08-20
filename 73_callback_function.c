#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

void greetHelloAndExecute(int (*fptr)(int, int))
{
    printf("Hello user\n");
    printf("The sum of 5 and 8 is %d\n",fptr(5,8));
}

void greetGmAndExecute(int (*fptr)(int, int))
{
    printf("Good Morning User\n");
    printf("The sum of 5 and 8 is %d\n",fptr(5,8));
}

int main()
{
    int (*ptr)(int, int);
    // int *ptr(int, int);  //this is wrong way becouse, int understaned that, this is a pointer function
    ptr = sum;
    // ptr = &sum;   // this is also correct
    greetGmAndExecute(ptr);
    greetHelloAndExecute(ptr);
    return 0;
}