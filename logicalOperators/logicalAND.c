#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operators = && (AND) checks if two conditions are true

    float temp = 25;
    bool sunny = true;

    if(temp >= 0 && temp <= 30 && sunny){  // you can also use 1 for true and 0 for false
        printf("The weather is good!");
    }
    else{
        printf("The weather is bad!");
    }

    return 0;
}