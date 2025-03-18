#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Time complexity: O(n)

bool checkPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n; 
    printf("Enter a number: ");
    scanf("%d", &n);
    if (checkPrime(n)) {
        printf("%d is a prime number\n", n);
    } else {
        printf("%d is not a prime number\n", n);
    };
    return 0;
}