#include <stdio.h>
#include <math.h>
#include <string.h>

void input();
void addFunction();
void subFunction();
void divFunction();
void multFunction();

int main() {
    input();
    return 0;
}

void input(){
    char operator[20];
    char *addition = "+";
    char *subtraction = "-";
    char *division = "/";
    char *multiplication = "*";

    printf("Which operator would you like to use? (+, -, /, *): ");
    scanf("%s", operator);

    int addResult = strcmp(operator,addition);
    int subResult = strcmp(operator,subtraction);
    int divResult = strcmp(operator,division);
    int multResult = strcmp(operator,multiplication);

    if (addResult == 0)
        addFunction();
    else if (subResult == 0){
        subFunction();
    }
    else if (divResult == 0){
        divFunction();
    }
    else if (multResult == 0){
        multFunction();
    }
    else{
        printf("That is not an operator.");
    }
}

void addFunction() {
    int value;
    int value1;

    printf("Number 1 and Number 2: ");
    scanf("%i %i", &value, &value1);

    int sum = value + value1;

    printf("%i", sum);
}

void subFunction() {
    int value;
    int value1;

    printf("Number 1 and Number 2: ");
    scanf("%i %i", &value, &value1);

    int sum = value - value1;

    printf("%i", sum);
}

void divFunction() {
    int value;
    int value1;

    printf("Number 1 and Number 2: ");
    scanf("%i %i", &value, &value1);

    int sum = value / value1;

    printf("%i", sum);
}

void multFunction() {
    int value;
    int value1;

    printf("Number 1 and Number 2: ");
    scanf("%i %i", &value, &value1);

    int sum = value * value1;

    printf("%i", sum);
}

