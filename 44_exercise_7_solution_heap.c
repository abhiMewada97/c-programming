#include <stdio.h>
#include <string.h>
struct driver
{
    char name[32], route[32], licence_no[32];
    int km;
};

int main()
{
    struct driver d1, d2, d3;
        
    printf("Enter name, km, licence no., route : ");
    scanf("%s %d %s %s",&d1.name, &d1.km, &d1.licence_no, &d1.route);
    
    printf("Enter name, km, licence no., route : ");
    scanf("%s %d %s %s",&d2.name, &d2.km, &d2.licence_no, &d2.route);
    
    printf("Enter name, km, licence no., route : ");
    scanf("%s %d %s %s",&d3.name, &d3.km, &d3.licence_no, &d3.route);
    


    printf("name = %s kms = %d licence_no = %s route = %s\n",d1.name, d1.km, d1.licence_no, d1.route);

    printf("name = %s kms = %d licence_no = %s route = %s\n",d2.name, d2.km, d2.licence_no, d2.route);

    printf("name = %s kms = %d licence_no = %s route = %s\n",d3.name, d3.km, d3.licence_no, d3.route);

    return 0;
}