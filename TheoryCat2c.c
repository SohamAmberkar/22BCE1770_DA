#include<stdio.h>
int func(int n) {
    if (n == 0) {
        return 1;
    }
    return n * func(n - 1);
}
int main() {
    int n;
    printf("Enter value for n: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1;i <= n;i++) {
        sum += (func(i) / i);
    }
    printf("%d", sum);
}