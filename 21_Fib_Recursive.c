#include <stdio.h>
int fib_recursive(int n)
    {
        if(n==1 || n==2)
        {
            return n-1;
        }
        else
        {
            return fib_recursive (n-1) + fib_recursive (n-2);
        }
    }

    // 0 1 1 2 3 5 8 13 21

int fib_iterative(int n)
    {
        int a=0;
        int b=1;

        for (int i=0; i<n-1; i++)
        {
            b=a+b;
            a=b-a;
        }
        return a;
    }

int main()
{
    int number;
    printf("Enter the index to get fibonacci series : ");
    scanf("%d",&number);

    printf("The value of fibonacci number at position no %d usig recursive approach is %d\n",number,fib_recursive(number));

    printf("The value of fibonacci number at position no %d usig iterative approach is %d\n",number,fib_iterative(number));

return 0;
}