#include <stdio.h>
int main()
{
    int a;
    for( int i=0; i<8; i++)
    {
        printf("%d\n",i);
        for( int j=0; j<8; j++)
        {
            printf("Inter the no. , inter 0 for exit : ");
            scanf("%d",&a);
            if(a==0)
            {
                goto end;
                // break;
            }
        }
    }
    end:

    return 0;
}