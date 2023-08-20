#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = " Ravi";
    char s2[] = "Abhishek";
    puts(strcat(s2,s1));  // add in first 
    puts(s2);  // this become now Abhishek Ravi
    puts(s1);  // this become same as   // Ravi
    
    return 0;
}