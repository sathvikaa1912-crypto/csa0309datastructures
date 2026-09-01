#include <stdio.h>
#include <ctype.h>

int main() {
    char exp[50], stack[50];
    int top = -1, i = 0;

    printf("Enter expression: ");
    scanf("%s", exp);

    while (exp[i] != '\0') {
        if (exp[i] == '(')
            stack[++top] = exp[i];
        else if (exp[i] == ')') {
            if (top == -1) {
                printf("Invalid Expression");
                return 0;
            }
            top--;
        }
        i++;
    }

    if (top == -1)
        printf("Balanced Expression");
    else
        printf("Invalid Expression");

    return 0;
}
