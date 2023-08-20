#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    // ptr = fopen("64_tutorial.txt","w");  //this will clean then write

    // ptr = fopen("64_tutorial.txt","r+");  // not remove but Replace the word from first
    // ptr = fopen("64_tutorial.txt","w+");     // clean all and add the text
    ptr = fopen("64_tutorial.txt","a+");  //apend text will be add in the end

    fputc('o', ptr);
    fputs(" This will add ",ptr);

    fclose(ptr);
    return 0;
}