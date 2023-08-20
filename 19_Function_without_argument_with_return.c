#include <stdio.h>
int takenumber()
{
    int i;
    printf("Enter a no. : ");
    scanf("%d",&i);
    return i;
}

int main()
{
    int c;
    c = takenumber();
    printf("The inter number is %d",c);

return 0;
}