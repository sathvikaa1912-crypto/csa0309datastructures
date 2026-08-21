#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter how many numbers you want to check: ");
    scanf("%d", &n);

    int arr[n];   // array to store numbers

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nResult:\n");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            printf("%d is Even\n", arr[i]);
        else
            printf("%d is Odd\n", arr[i]);
    }

    return 0;
}
