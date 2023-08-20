#include <stdio.h>
int main()
{
    int arr[]={21,41,71,51,71,13,25};
    printf("Value at possition 3 of the array is %d\n",arr[3]);
    printf("Address of the zeroth element of the array is %d\n",&arr[0]);
    printf("Address of the zeroth element of the array is %d\n",arr);
    printf("Address of the first element of the array is %d\n",&arr[1]);
    printf("Address of the first element of the array is %d\n\n",arr+1);

    printf("value at Address of the first element of the array is %d\n",*(&arr[1]));
    printf("value at Address of the second element of the array is %d\n",*(&arr[2]));
    printf("value at Address of the first element of the array is %d\n",*(arr+1));
    printf("value at Address of the second element of the array is %d\n",*(arr+2));
    printf("value at Address of the second element of the array is %d\n",*(&arr[2]));
    printf("value at Address of the third element of the array is %d\n\n",*(&arr[3]));
    
    printf("Value of the first element of the array is %d\n",*arr);
    printf("Pluse + in the value 0f first element %d\n",*arr+1);
    printf("Pluse + in the value 0f first element %d\n",*arr+2);

    return 0;
}