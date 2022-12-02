#include <stdio.h>
#include <string.h> // more info in strings

int main(){

    char name[25]; // bytes - exceeding bytes will cause a buffer overflow
    int age;

    printf("\nWhat is your name?: ");
    //scanf("%s", name); // only reads up to whitespace
    fgets(name, 25, stdin); // allows whitespace to be included
    name[strlen(name)-1] = '\0'; // gets rid of newline character 

    printf("\nHow old are you?: ");
    scanf("%d", &age);

    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old.\n", age);

    return 0;
}