#include <stdio.h>
#include <string.h>

int main()
{    
    int arr[]={1,2,3,4,5};

    for(int i = 0 ; i<5 ; i++){
    printf("%d ",arr[i]);
    }

    printf("\n");

    for (int j = 4; j >= 0; j--)
    {
        printf("%d ",arr[j]);
    }
    

    return 0;
}