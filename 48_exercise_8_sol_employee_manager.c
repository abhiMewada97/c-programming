#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,id;
    char a,b,*p;
    while (i<3)
    {
        printf("Employe %d : Enter the no. how many character of in your employe id : \n",i+1);
        scanf("%d",&id);

        printf("Enter the vlaue of a \n");
        getchar();                             //remove buffer value 
        scanf("%c",&a);                     // if we enter two value it will again take buffer value
        printf("Enter the value of b \n");
        getchar();
        scanf("%c",&b);                     // enter only one value  
        
        p=(char *) malloc((id+1)*sizeof(char));
        printf("Enter your employe id \n");
        scanf("%s",p);
        printf("your employe id is %s \n",p);
        free(p);
        i=i+1;
    }
        

    return 0;
}