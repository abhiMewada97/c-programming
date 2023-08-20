#include <stdio.h>
int main()
{
    int num,index=0;

    printf("Inter a number : ");
    scanf("%d",&num);

    while (index < num)
    {
        printf("%d\n",index+1);
        index = index + 1;
    }
    return 0;
}