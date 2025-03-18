#include <stdio.h>
#include <stdlib.h>

void Insertion_sort(int array[], int n) {
    for(int i = 1; i < n; i++) {
        int key = array[i];
        int j = i - 1;
        while (j>=0 && array[j] > key) {
            array[j+1] = array[j];
            j = j - 1;
        }
        array[j+1] = key;
    }
}
int main()  {
    int array[9] = {3, 7, 4, 1, 5, 2, 8, 6, 9};
    int n = (sizeof(array)/sizeof(array[0]));
    Insertion_sort(array, n);
    for (int i = 0; i < n; i++) {
        printf("%d ",array[i]);
    };
    return 0;
}