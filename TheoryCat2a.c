#include <stdio.h>
int count = 0;
void divide(int arr[], int start, int end) {
    if (start >= end) {
        return;
    }
    int mid = (start + end) / 2;
    divide(arr, start, mid);
    count++;
    divide(arr, mid + 1, end);
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7,8,9,10 };
    int n = sizeof(arr) / sizeof(arr[0]);

    divide(arr, 0, n - 1);
    printf("Number of iterations: %d", count);
    return 0;
}