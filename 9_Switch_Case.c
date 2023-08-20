#include <stdio.h>
int main()
{
    int age;
    printf("Inter your age : ");
    scanf("%d",&age);

    switch (age)
    {
        case 3:
        printf("your age is 3");
        break;

        case 4:
        printf("\nyour age is 4");
        break;

        case 9:
        printf("\nyour age is 9");
        break;

        default:
        printf("\nyour age is not 3, 9 and 4 your age is something else");

    }
    return 0;
}