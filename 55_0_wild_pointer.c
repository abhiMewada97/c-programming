#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 234;
    int *ptr; // this is wild pointer
//   ptr = 32;     // this is not a good think to do
    ptr = &a ;  // ptr is no longer a wild pointer
    printf("The value of a is %d",*ptr);
    return 0;
}