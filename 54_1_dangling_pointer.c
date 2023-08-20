#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    {   // ---> scope start
        int i = 475;
        ptr = &i; //ptr points to invalid location
    }  // ---> scope end  // scope khatam hote hi i variable destroyed ho jayega

    // ptr is now a dangling pointer
    printf("%d",*ptr);
    return 0;
}