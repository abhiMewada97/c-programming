#include <stdio.h>

int main()
{
    int a =21;
    float b = 32.3;
    void *ptr;

    ptr = &b;
    printf("The value of b is %f\n",*( (float *) ptr));
    // printf("The value of b is %f\n",*ptr);  //This will give error
    
    ptr = &a;
    printf("The value of a is %d\n",*( (int *) ptr));
    
    return 0;
}