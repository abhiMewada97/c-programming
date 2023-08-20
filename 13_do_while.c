#include <stdio.h>
int main()
{
    int num, index = 0;

    printf("How many time do you want write your name\n");
    scanf("%d", &num);

    do
    {
        printf("%d\n", index + 1);
        printf("Hello Mr. Abhishek\n");
        index = index + 1;
    }

    while (index < num);

    return 0;
}