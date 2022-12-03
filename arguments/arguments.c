#include <stdio.h>

void birthday(char name[], int age) // parameters dont need to be the same name, only order
{
    printf("\nHappy birthday dear %s!", name);
    printf("\nYou are %d years old!", age);
}

int main()
{
    char name[] = "Warren";
    int age = 21;

    birthday(name, age); // enter arguments for name and age

    return 0;
}