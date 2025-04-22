#include <stdio.h>

int main() {
    double number_1, number_2;
    char operator;

    printf("Insert the first number: \n");
    scanf("%lf", &number_1);

    printf("Insert 1 for addition, 2 for subtraction, 3 for multiplication, and 4 for division: \n");
    scanf(" %c", &operator);

    printf("Insert the second number: \n");
    scanf("%lf", &number_2);

    double result;

    switch (operator) {
        case '1':
            result = number_1 + number_2;
        printf("The operation was %.2lf + %.2lf\n", number_1, number_2);
        break;
        case '2':
            result = number_1 - number_2;
        printf("The operation was %.2lf - %.2lf\n", number_1, number_2);
        break;
        case '3':
            result = number_1 * number_2;
        printf("The operation was %.2lf * %.2lf\n", number_1, number_2);
        break;
        case '4':
            if (number_2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 0;
            }

        result = number_1 / number_2;
        printf("The operation was %.2lf / %.2lf\n", number_1, number_2);
        break;
        default:
            printf("Invalid operator! Please choose 1, 2, 3, or 4.\n");
        return 0;
    }

    if (result == (int)result) {
        printf("Result: %.0f\n", result);
    } else if (result < 1 && result > -1) {
        printf("Result: %.5f\n", result);
    } else {
        printf("Result: %.2f\n", result);
    }

    return 0;
}
