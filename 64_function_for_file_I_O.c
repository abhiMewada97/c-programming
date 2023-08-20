#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    // char string[34];
    char string[34] = "This will be writing, in this file";

    //------->>>>>>> Reading a file <<<<<<----------
    // ptr = fopen("64_tutorial.txt","r");
    // fscanf(ptr, "%s", string);
    // printf("Other file will be use in this %s\n",string);

    //-------->>>>>> Writing a file <<<<<<---------
    // ptr = fopen("64_tutorial.txt","w");         //This will remove and write
    ptr = fopen("64_tutorial.txt","a");        //This will add write 
    fprintf(ptr, "%s", string);  

    fclose(ptr);

    return 0;
}