#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("64_tutorial.txt","r");
    
    char str[5];
    fgets(str, 5, ptr);   // This will read only 4 char because 1 is null char
    printf("This will read string character %s\n",str);

    fclose(ptr);

    return 0;
}