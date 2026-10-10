#include <stdio.h>

int main(void) {
    int a = 10, b = 5, c = 2, d = 3;

    printf("Operator precedence demonstration\n");
    printf("--------------------------------\n");

    printf("1) a + b * c = %d\n", a + b * c);        // * has higher precedence than +
    printf("2) (a + b) * c = %d\n", (a + b) * c);    // parentheses are evaluated first
    printf("3) a / b * c = %d\n", a / b * c);        // same precedence, left-to-right
    printf("4) a + b %% c = %d\n", a + b % c);        // % has higher precedence than +
    printf("5) a - b + c = %d\n", a - b + c);        // same precedence, left-to-right
    printf("6) a * (b + c) = %d\n", a * (b + c));    // parentheses override precedence

    printf("\nExplanation:\n");
    printf("- Multiplication and division are evaluated before addition and subtraction.\n");
    printf("- Operators with the same precedence are evaluated from left to right.\n");
    printf("- Parentheses force a different order of evaluation.\n");

    return 0;
}