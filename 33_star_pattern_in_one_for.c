#include <stdio.h>

void printStar(int n)
{
    if(n==1)
    {
        printf("*\n");
        return;
    }
    printStar(n-1);
    for(int i=0; i<(n*2-1); i++)
    {
        printf("* ");
    }
    printf("\n");
}

int main()
{
    int n;
    printf("How many star do you want to print : ");
    scanf("%d",&n);
    printStar(n);
}