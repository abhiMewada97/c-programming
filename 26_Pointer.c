#include <stdio.h>
int main()
{
    int a = 12;
    int *ptra = &a;
    
    printf("The address of pointer to a is %d\n",&ptra);
    printf("The address of a is %d\n",ptra);
    printf("The address of a is %d\n",&a);
    printf("The value of a is %d\n",*ptra);
    printf("The value of a is %d\n",a);

    return 0;
}