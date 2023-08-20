#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    char name[20];
    int mark;
};

int main()
{
    typedef struct student a;
    a abhi;
    abhi.id = 12453;
    abhi.mark = 95;
    strcpy(abhi.name,"abhishek");

    printf("id of abhi = %d\n",abhi.id);
    printf("name of abhi = %s\n",abhi.name);
    printf("marks of abhi = %d\n",abhi.mark);

    return 0;
}