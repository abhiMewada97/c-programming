#include <stdio.h>
void func1(int arr[2][2])
{
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        printf("The value at %d and %d is %d\n",i,j,arr[i][j]);
    }

}

int main()
{
    int arr[2][2]={{2,5},{6,4}};
    func1(arr);
    return 0;
}