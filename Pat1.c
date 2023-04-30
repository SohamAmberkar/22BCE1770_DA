#include<stdio.h>

int isPerfect(int n) {
    int sum = 0;
    int flag;
    for (int i = 1;i < n;i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    if (sum == n) {
        printf("%d is a perfect number", n);
    }
    else {
        printf("%d is not a perfect number", n);
    }

}
int isArmstrong(int n) {
    int temp, a = n;
    int armstrong = 0;
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += (digit * digit * digit);
        n = n / 10;
    }
    if (temp == sum) {
        armstrong = 1;
    }
    if (armstrong == 1) {
        printf("%d is an Armstrong number\n", a);
    }
    else {
        printf("%d is not an armstrong number\n", a);
    }
}
int isPrime(int n) {
    int prime = 1;
    for (int i = 2;i < n;i++) {
        if (n % i == 0) {
            prime = 0;
        }
    }
    if (prime == 1) {
        printf("%d is a prime number\n", n);
    }
    else {
        printf("%d is not a prime number\n", n);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    if (n == 1) {
        printf("Not prime\n");
    }
    else
        isPrime(n);
    isArmstrong(n);
    isPerfect(n);



}