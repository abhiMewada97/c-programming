#include <stdio.h>
int starpatter(int rows)
{
    int i,j;
    for (i = 1; i <= rows; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    int rows;
    printf("How many row do you want : ");
    scanf("%d",&rows);
    starpatter(rows);
    return 0;
    }