#include <stdio.h>

#define MAX 100

int main() {
    char exp[MAX], stack[MAX];
    int top = -1, i;
    int valid = 1;

    printf("Enter an expression: ");
    scanf("%99s", exp);

    for (i = 0; exp[i] != '\0'; i++) {
        if (exp[i] == '(') {
            top++;
            stack[top] = exp[i];
        }
        else if (exp[i] == ')') {
            if (top == -1) {
                valid = 0;
                break;
            }
            top--;
        }
    }

    if (top != -1)
        valid = 0;

    if (valid == 1)
        printf("Balanced Expression");
    else
        printf("Not Balanced Expression");

    return 0;
}
