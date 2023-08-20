#include <stdio.h>
int reverseStarPattern(int rows)
{
    for ( int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
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
    reverseStarPattern(rows);
    return 0;
}