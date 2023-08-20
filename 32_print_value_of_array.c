#include <stdio.h>
int func1(int arr[])  // Take direct value 
{
    for(int i=0; i<4; i++)
    {
        printf("The value of %d is %d\n",i, arr[i]);
    }
    return 0;
}
int main()
{
    int arr[] = {3,6,2,7};
    printf("The value at index 0 is %d\n",arr[0]);
    func1(arr);
    printf("The value at index 0 is %d",arr[0]);
    return 0;
}