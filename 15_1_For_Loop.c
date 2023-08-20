#include <stdio.h>
int main()
{
    int i,a=0;
    
    printf("Inter a number : ");
    scanf("%d",&i);
    
    for (; a<i; a++)
    {
        printf("\n%d",a);
    }
    return 0;
}