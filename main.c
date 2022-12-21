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

void input() {
    char operator[20];
    char *addition = "+";
    char *subtraction = "-";
    char *division = "/";
    char *multiplication = "*";

    printf("Which operator would you like to use? (+, -, /, *): ");
    scanf("%s", operator);

    int result = strcmp(operator, addition);

    switch (result) {
        case 0:
            addFunction();
            break;
        default:
            result = strcmp(operator, subtraction);
            switch (result) {
                case 0:
                    subFunction();
                    break;
                default:
                    result = strcmp(operator, division);
                    switch (result) {
                        case 0:
                            divFunction();
                            break;
                        default:
                            result = strcmp(operator, multiplication);
                            switch (result) {
                                case 0:
                                    multFunction();
                                    break;
                                default:
                                    printf("That is not an operator.");
                            }
                    }
            }
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

