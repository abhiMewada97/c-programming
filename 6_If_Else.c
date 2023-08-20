#include <stdio.h>
int main()
{
    int age;
    printf("Inter Your Age :");
    scanf("%d",&age);

    printf("Your Age Is %d",age);
    
    if (age>18)
    {
        printf("\nYou can vote");
    }

    else if (age>10)
    {
        printf("\nyour age is between 10 to 18 you can vot for kids"); 

    }

    else
    {
        printf("\nYou can not vot");
    }
    
    return 0;
}