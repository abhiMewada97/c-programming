#include <stdio.h>
int func2(int arr[]) //Take direct value
{
    for(int i=0; i<4; i++)
    {
        printf("The value of %d is %d\n",i,arr[i]);
    }
    arr[0]=121;
    return 0;
}
int main()
{
    int arr[]={3,5,2,6};
    printf("The value at index 0 is %d\n",arr[0]);
    func2(arr);
    printf("The value at index 0 is %d",arr[0]);
    return 0;
}