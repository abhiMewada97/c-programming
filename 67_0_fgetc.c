#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("64_tutorial.txt","r");
    
    char c = fgetc(ptr);
    printf("This is the fgetc %c\n",c);   //This will get first character

    c = fgetc(ptr);
    printf("This is the fgetc %c\n",c);  //This will get next character
   
    fclose(ptr);
    return 0;
}