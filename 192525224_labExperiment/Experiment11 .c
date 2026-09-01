#include <stdio.h>
#define MAX 10

int stack[MAX];
int top = -1;

void push(int value) {
    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else {
        stack[++top] = value;
        printf("%d pushed into stack\n", value);
    }
}

void pop() {
    if (top == -1)
        printf("Stack Underflow\n");
    else
        printf("%d popped from stack\n", stack[top--]);
}

void peek() {
    if (top == -1)
        printf("Stack is empty\n");
    else
        printf("Top element = %d\n", stack[top]);
}

int main() {
    int choice, value;

    do {
        printf("\n1.Push  2.Pop  3.Peek  4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
        }
    } while(choice != 4);

    return 0;
}
