#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("\nFile name is %s\n",__FILE__);
    printf("Todays date is %s\n",__DATE__);
    printf("Time is now %s\n",__TIME__);
    printf("Number of line is %d\n",__LINE__);
    printf("ANSI is %d\n",__STDC__);
    
    return 0;
}