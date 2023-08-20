#include <stdio.h>
int printstring(char arr[])
{
    int i=0;
    while(arr[i]!='\0')
    {
        printf("%c",arr[i]);
        i++;
    }
    return 0;
}

int main()
{
    char arr[]={'A','b','h','i','s','h','e','k','\0'};

    // char arr[6]="Hello";             //we can write like this also;
    // char arr[]="Hello Abhishek";     //we can write like this also; 
                                        //In this code compiler take null character automaticaly;

    printstring(arr);
    return 0;
}