#include <stdio.h>

int myfunc(int a, int b)
{
    static int myvar;
    myvar ++;
    printf("The value of myvar is %d \n", myvar);

    return myvar;
}

int main()
{
    int myvar = myfunc(3,5);
    printf("%d\n",myvar);
    myvar = myfunc(3,5);
    myvar = myfunc(3,5);
    myvar = myfunc(3,5);
    
    
    return 0;
}