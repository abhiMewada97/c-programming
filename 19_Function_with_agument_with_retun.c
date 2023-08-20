#include <stdio.h>
int sum(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}

int main()
{
    int a=4, b=3, c, d;
    c=sum(a,b);
    d=sub(a,b);
    
    printf(" The sum is %d\n ",c);
    printf("The sub is %d\n ",d);

    return 0;

}