#include <stdio.h>
int printstr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
    return 0;
}

int main()
{
    char str[21];
    printf("Enter the string : ");
    gets(str);        // this take value after the space
    // scanf("%s",str);    // this will not take value after the space

    printf("by Using func printstr --- ");
    printstr(str);
    
    printf("by Using printf --- %s\n",str);
    
    printf("by Using puts --- ");
    puts(str);
    
    return 0;
}