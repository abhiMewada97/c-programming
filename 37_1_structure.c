#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    int marks;
    char favorate_character;
    char name[55];
};


int main()
{
    struct student abhi, neetu, vishal;    // (struct students) khude ek data type hai
    abhi.id=12;
    neetu.id=42;
    vishal.id=22;
    abhi.marks=87;
    abhi.favorate_character='a';
    strcpy(abhi.name ,"abhi shek");

    printf("abhishek id = %d\n",abhi.id);
    printf("neetu id = %d\n",neetu.id);
    printf("vishal id = %d\n",vishal.id);

    printf("abhishek marks = %d\n",abhi.marks);
    printf("abhishek fav_char = %c\n",abhi.favorate_character);
    printf("abhishek name = %s\n",abhi.name);

    return 0;
}