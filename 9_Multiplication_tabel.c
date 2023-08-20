#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the no of table which you want : ");
    scanf("%d",&a);
    printf("How many multiplication do you want : ");
    scanf("%d", &b);

     for (int i=1; i<=b; i++)
    {
        printf("%d * %d = %d\n",a,i,c=a*i);
    }


    return 0;

}
