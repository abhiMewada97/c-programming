#include <stdio.h>
#include <string.h>
union student
{
    int id;
    char name[20];
    char favorate_character;
};

int main()
{
    union student abhi;
    // abhi.id = 6;                        // if we use this it will corrupt
    // strcpy(abhi.name,"abhi shek");      // if we use this it will corrupt
    abhi.favorate_character = 'a';        // we can use one, in one time
                                          // if we use all, last one give precident and all are corrupt

    // printf("id = %d\n",abhi.id);
    // printf("name = %s\n",abhi.name);
    printf("\nfavorate_character = %c\n\n",abhi.favorate_character);

    return 0;
}