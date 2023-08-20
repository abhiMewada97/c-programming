#include <stdio.h>

int main()
{
    int age;
    int marks;
    printf("Inter your age : ");
    scanf("%d",&age);
    
    printf("Inter your marks : ");
    scanf("%d",&marks);

    
        switch (age)
        {
            case 3:
            printf("Your age is 3\n");

           switch (marks)
            {
                case 45:
                printf("your marks is 45\n");
                break;

                default:
                  printf("Your marks is not 45");
            }
            break;

            case 4:
            printf("your age is 4\n");
            break;

            case 5:
            printf("your age is %d\n",age);
            break;
        
            default:
            printf("Your are out");
        }
    
    return 0;
}