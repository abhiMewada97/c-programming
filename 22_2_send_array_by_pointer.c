#include<stdio.h>

void func2(int*ptr)
{
    for(int i=0; i<4; i++)
    {
        printf("The value at index %d is %d\n", i, *(ptr+i));
    }
    *(ptr+2) = 231;
}

int main()
{
    int arr[]={21,32,12,43};
    printf("\n");
    func2(arr);
    printf("\n");
    func2(arr);
    printf("\n");
    return 0;
}