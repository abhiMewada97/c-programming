#include<stdio.h>
#include <stdlib.h>
int *myFunc()
{
    // static int a = 32;  //below is not dangling pointer if we write like this
    
    // a is local variabl and goes out of scope on function return over.
    int a = 32;
    return &a;  //a will destroyed after fun end
}
int main()
{
    int *ptr = myFunc(); //ptr points to invalid location // dangling pointer 
    printf("%d",*ptr);
    return 0;
}
