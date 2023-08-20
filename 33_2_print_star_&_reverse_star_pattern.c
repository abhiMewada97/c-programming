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

int reversestarpattern(int rows)
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
    int rows, choice;
    printf("Inter 0 for Star pattern & 1 for reverse star pattern : ");
    scanf("%d",&choice);
    printf("How many row do you want : ");
    scanf("%d",&rows);

    switch( choice )
    {
    case 0:
    starpatter(rows);
    break;

    case 1:
    reversestarpattern(rows);
    break;

    default:
    printf("You inter the wrong choice");
    }
    return 0;
}