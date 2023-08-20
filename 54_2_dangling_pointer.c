#include <stdio.h>
#include <stdlib.h>
int main()
{
    // Case 1: default allocation of a memory block
    int *ptr = (int *)malloc(7* sizeof(int));
    ptr[0]=34;
    ptr[1]=23;
    ptr[2]=55;
    ptr[3]=74;
    free(ptr);  // ptr is now a dangling pointer

    return 0;
}