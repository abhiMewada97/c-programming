#include <stdio.h>
int main()
{
    int a,age,i=0;
    printf("Inter a Integer : ");
    scanf("%d",&a);
    for (i; i<a; i++)
    {
        printf("%d\ninter your age : ",i);
        scanf("%d",&age);
        if (age<10)
        {
            continue;
        }
        printf("You are a good boy\n");
        printf("Because your age is above 18\n");
    }
    return 0;
}