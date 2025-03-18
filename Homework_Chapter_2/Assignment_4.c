#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Question a: Time complexity: O(n^2)
/*int main() {
    int n;
    printf("Enter a degree of polinomial function: ");
    scanf("%d", &n);

    int* arr = (int*) calloc(n + 1, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    for (int i = 0; i <= n; i++) {
        printf("Enter the coefficient of x^%d: ", i);
        scanf("%d", &arr[i]);
    } // Time complexity: O(n)

    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);

    int F = 0;
    for(int i = 0; i <= n; i++) {
        F += arr[i] * pow(x, i);
    }   // Time complexity: O(n^2) because of the pow() function which has a time complexity of O(n)

    printf("The value of the polinomial function is: %d\n", F);
    free(arr);
    return 0;
}*/

//Question b: Time complexity: O(n)
int main() {
    int n;
    printf("Enter a degree of polinomial function: ");
    scanf("%d", &n);

    int* arr = (int*) calloc(n + 1, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    for (int i = 0; i <= n; i++) {
        printf("Enter the coefficient of x^%d: ", i);
        scanf("%d", &arr[i]);
    } // Time complexity: O(n)

    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);

    int F = arr[0];
    for(int i = 1; i <= n; i++) {
        F = F * x + arr[i];
    }   // Time complexity: O(n)

    printf("The value of the polinomial function is: %d\n", F);
    free(arr);
    return 0;
}