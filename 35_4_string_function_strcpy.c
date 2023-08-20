#include <stdio.h>
#include <string.h>
int main()
{
    char s1[]="Abhishek";
    char s2[]="Neetu";
    char s3[20];
    strcpy(s3,strcpy(s1,s2));   //This remove all then write 
    puts(s1);   //This become now Neetu
    puts(s2);   //This become now Neetu
    puts(s3);   //This become now Neetu

    return 0;
}