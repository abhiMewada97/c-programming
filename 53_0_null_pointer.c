#include <stdio.h>

int main()
{
    int a = 32;
    // int *ptr = &a
    int *ptr = NULL;
    printf("The address of a is %d\n",ptr);
    printf("The value of a is %d",*ptr);       //it will crash   //it means it will not give any output
    return 0;
}