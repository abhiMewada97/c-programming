#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the no. which you want to convert : ");
    scanf("%d",&a);
    printf("Enter your choich");
    printf("\n1.kg to gram\n2.cm to m\n3.Liter to ml\nchoice  =  ");
    scanf("%d",&b);

    if(b == 1)
    {
        printf("%d kg = %d g",a,a*1000);
    }
    else if(b == 2)
    {
        printf("%d cm = %d m",a,a*1024);
    }
    else if(b == 3)
    {
        printf("%d liter = %d ml",a,a*1010);
    }
    else 
    {
        printf("You inter a wrong choich");
    }
    return 0;

}