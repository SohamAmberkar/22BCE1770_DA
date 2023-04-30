#include <stdio.h>

#define N 3
int fun(int n);
int main() {
    int a;
    scanf("%d", &a);
    if (a > 5)
        printf("Invalid");
    else
        printf("%d", fun(a));
    return 0;

}
int fun(n) {
    static int i = 1;
    if (n == 0)
        return N;
    else {
        i = i * fun(n - 1);
        return i;
    }
}
