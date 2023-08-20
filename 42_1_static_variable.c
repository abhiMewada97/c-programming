#include <stdio.h>
// int b = 34;

int ret()
{
    return 43*3;
}

int func1(int b)
{
    static int myvar = 4;
    // static int myvar = ret();   // we can not write like this //constant value chahiye ye kisi function ko call nahi karega
    printf("The value of myvar is %d\n",myvar);
    myvar++;
    return b + myvar ;
}

int main()
{
    int b = 3 ;
    int val = func1(b);
    printf("The value of val is %d\n",val);
    val = func1(b);
    printf("The value of val is %d\n",val);
    val = func1(b);
    printf("The value of val is %d\n",val);
    val = func1(b);
    printf("The value of val is %d\n",val);
    val = func1(b);
    printf("The value of val is %d\n",val);

    return 0;
}