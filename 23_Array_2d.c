#include<stdio.h>
int main()
{
    int marks[][4] = {{11, 23, 13, 24},
                     {75, 61, 72, 18}};
for (int i=0; i<2; i++)
{
    for (int j=0; j<4; j++)
    printf("%d ",marks[i][j]);

    printf("\n");
}
return 0;
}