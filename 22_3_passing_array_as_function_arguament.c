#include <stdio.h>

void func3(int arr[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at index %d, %d is %d\n",i,j,arr[i][j]);
        }
    }
}

int main()
{
    int arr[][2] = {{21, 32}, {12, 43}};
    func3(arr);
    return 0;
}