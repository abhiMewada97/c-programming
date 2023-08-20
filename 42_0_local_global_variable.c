#include <stdio.h>
int b = 34;     // this is global variable
                // local variable jyada precidence leta hai

 int func1(int b1)   // if we give b in place of b1 so it print local variable
{
                   
    printf("The address of b inside of func1 is %d\n",b);  // this will print global variable because func1
    // printf("The address of b inside of func1 is %d\n",&b);
    // return b * 10 ;
    return b1 * 10 ;     // this will print local variable
    // return b * 10;   // this will print gloval variable
}

int main()
{
    int b = 345 ;        // this is local variable
    // printf("The address of b inside the main is %d\n",&b);
    printf("The value of b is %d\n",b);
    int val = func1(b);
    printf ("The value of func1 is %d\n",val);
    return 0;
}