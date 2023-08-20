#include <stdio.h>
int func2(int *ptr) // Pass the addresh by pointer and value will print
{
    for(int i=0; i<4; i++)
    {
        printf("The value of %d is %d\n",i,ptr[i]);
        // printf("The value of %d is %d\n",i,*(ptr+1));   // We can write like this also 
    }

    *(ptr+1)=6327;
    return 0;
}

int main()
{
    int arr[]={3,5,9,6};
    printf("The value at index 1 is %d\n",arr[1]);
    func2(arr);
    printf("\n");
    func2(arr);   //Value of this fun will change because when first fun run then the value will change then the second fun run
    printf("The value at index 1 is %d",arr[1]);
    return 0;
}