#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operators = ! (NOT) reverses the state of a condition

    bool sunny = false;

    if(!sunny){
        printf("\nIt's sunny outside!");
    }
    else{
        printf("\nIt's cloudy outside!");
    }

    return 0;
}