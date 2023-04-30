#include<stdio.h>
int main() {
    int sum = 0;
    for (int i = 1000;i < 1000;i = i + 2) {
        sum += i;
    }
    int answer = 0;
    while (sum != 0) {
        int dig = sum % 10;
        answer += dig;
        sum = sum / 10;
    }
    printf("\nThe number is %d", answer);
    if ((answer % 2) == 0) {
        printf("\nOdd found");
    }
    else {
        printf("\nEven found");
    }
    return 0;
}