#include <stdio.h>
int sum(int a, int b)
{
    return a+b;
}

int main()
{
    printf("The sum 1 and 3 is %d\n",sum(1,3));

    int d;
    int (*fptr)(int, int);  //declaring a function pointer
    fptr = &sum;    // creating a function pointer
    d = (*fptr)(4, 6);  //dereferencing a function pointer
    printf("The value of d is %d\n",d);
    return 0;
}