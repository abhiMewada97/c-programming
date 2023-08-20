#include <stdio.h>
#include <stdlib.h>

int *functionDangling()
{
    int a, b, sum;
    a = 34;
    b= 345;
    sum = a + b;
    return &sum;
}

int main()
{
    // case 1 : De allocation of a memory blick
    int *ptr = (int *)malloc(7* sizeof(int));
    ptr[0] = 34;
    ptr[1] =33;
    ptr[2]= 22;
    ptr[88]= 92;
    free(ptr); // ptr is now a dangling pointer

    // case 2 : Function returning local variable address
    int *dangPtr = functionDAngling();  // ptr is now a dangling pointer

    int *danglingPtr3;
    // Case 3 : If a variable goes out of scope
    {
        int a =223;
        danglingPtr3 = &a;
    }
    // Here variable a goes out of scope which means danglingPtr3 is pointing to a location which is free and hence danglingPtr3 is now a dangling pointer

    return 0;
}