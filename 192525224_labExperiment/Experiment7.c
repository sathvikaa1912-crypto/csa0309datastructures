#include <stdio.h>

#define MAX 100   // maximum size of array

int arr[MAX];
int n = 0;   // current number of elements

// Function to display array
void display() {
    int i;
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to insert element at position
void insert(int pos, int val) {
    int i;
    if (n == MAX) {
        printf("Array is full. Cannot insert.\n");
        return;
    }
    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return;
    }
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    n++;
    printf("Inserted %d at position %d.\n", val, pos);
}

// Function to delete element at position
void delete(int pos) {
    int i;
    if (n == 0) {
        printf("Array is empty. Cannot delete.\n");
        return;
    }
    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return;
    }
    printf("Deleted element %d from position %d.\n", arr[pos], pos);
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

int main() {
    int choice, pos, val;

    while (1) {
        printf("\n--- Array Operations Menu ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter position (0 to %d): ", n);
                scanf("%d", &pos);
                printf("Enter value: ");
                scanf("%d", &val);
                insert(pos, val);
                break;
            case 2:
                printf("Enter position (0 to %d): ", n - 1);
                scanf("%d", &pos);
                delete(pos);
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
#include <stdio.h>

#define MAX 100   // maximum size of array

int arr[MAX];
int n = 0;   // current number of elements

// Function to display array
void display() {
    int i;
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to insert element at position
void insert(int pos, int val) {
    int i;
    if (n == MAX) {
        printf("Array is full. Cannot insert.\n");
        return;
    }
    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return;
    }
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    n++;
    printf("Inserted %d at position %d.\n", val, pos);
}

// Function to delete element at position
void delete(int pos) {
    int i;
    if (n == 0) {
        printf("Array is empty. Cannot delete.\n");
        return;
    }
    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return;
    }
    printf("Deleted element %d from position %d.\n", arr[pos], pos);
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

int main() {
    int choice, pos, val;

    while (1) {
        printf("\n--- Array Operations Menu ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter position (0 to %d): ", n);
                scanf("%d", &pos);
                printf("Enter value: ");
                scanf("%d", &val);
                insert(pos, val);
                break;
            case 2:
                printf("Enter position (0 to %d): ", n - 1);
                scanf("%d", &pos);
                delete(pos);
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
#include <stdio.h>

#define MAX 100   // maximum size of array

int arr[MAX];
int n = 0;   // current number of elements

// Function to display array
void display() {
    int i;
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to insert element at position
void insert(int pos, int val) {
    int i;
    if (n == MAX) {
        printf("Array is full. Cannot insert.\n");
        return;
    }
    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return;
    }
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    n++;
    printf("Inserted %d at position %d.\n", val, pos);
}

// Function to delete element at position
void delete(int pos) {
    int i;
    if (n == 0) {
        printf("Array is empty. Cannot delete.\n");
        return;
    }
    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return;
    }
    printf("Deleted element %d from position %d.\n", arr[pos], pos);
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

int main() {
    int choice, pos, val;

    while (1) {
        printf("\n--- Array Operations Menu ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter position (0 to %d): ", n);
                scanf("%d", &pos);
                printf("Enter value: ");
                scanf("%d", &val);
                insert(pos, val);
                break;
            case 2:
                printf("Enter position (0 to %d): ", n - 1);
                scanf("%d", &pos);
                delete(pos);
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
