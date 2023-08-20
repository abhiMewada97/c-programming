#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    char favorate_character;
    char name[55];
};
//   } struct student abhi, neetu, vishal;        // we can write like this also 

    struct student abhi, neetu, vishal;       //public property
    void print()
    {
        printf("%s",abhi.name);

    }


int main()
{
    // struct student abhi, neetu, vishal;        // this will give error
    abhi.id=12;
    neetu.id=42;
    vishal.id=22;
    abhi.marks=87;
    abhi.favorate_character='a';
    strcpy(abhi.name ,"abhi shek");

    // printf("abhishek id = %d\n",abhi.id);
    // printf("neetu id = %d\n",neetu.id);
    // printf("vishal id = %d\n",vishal.id);

    // printf("abhishek marks = %d\n",abhi.marks);
    // printf("abhishek fav_char = %c\n",abhi.favorate_character);
    // printf("abhishek name = %s\n",abhi.name);
    print();

    return 0;
}