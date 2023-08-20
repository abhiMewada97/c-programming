#include <stdio.h>
int main()
{
    int i=0, j=0;
    for(i; j<5, i<4; i++, j++) 
    {
        printf("%d %d\n", i, j);
    }
}