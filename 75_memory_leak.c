#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, i=0;
    int *i2;
    while (i<4)
    {
        printf("Welcome to you in this code\n");
        i2 = malloc(24532 * sizeof (int));
        if (i/2==0)
        {
            getchar();
        }
        i++;
        free(i2);  //without this we will encounter a situation of memory leak

    }
    return 0;
}