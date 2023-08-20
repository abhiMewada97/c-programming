#include <stdio.h>
#include <string.h>
int main()
{
    char s1[]="Neetu";
    char s2[]="Abhishek";
    printf("The strcpm for s1, s2 returned %d",strcmp(s1,s2));        //  1
    // printf("The strcpm for s1, s2 returned %d",strcmp(s2,s1));     // -1
    // printf("The strcpm for s1, s2 returned %d",strcmp(s1,s1));     //  0

    return 0;
}