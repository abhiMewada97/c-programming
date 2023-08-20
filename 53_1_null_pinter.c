#include <stdio.h>
int main()
{
    int a = 32;
    // int *ptr = &a;
    int *ptr = NULL;
    
    if(ptr != NULL)
    printf("The value of a %d\n",*ptr);
    
    else
    printf("The pointer is null pointer and can not be deference");

    return 0;

}