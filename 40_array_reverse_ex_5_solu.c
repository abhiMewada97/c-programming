#include <stdio.h>
#include <string.h>

void rev(int arr[]){

    int temp;
    for (int i = 0; i < 5/2; i++)
        {
    
            temp = arr[i];
            arr [i]  = arr[4-i];
            arr[4-i] = temp;
        }
}

int main()
{    
    int arr[]={1,3,5,2,4};

    rev(arr);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}