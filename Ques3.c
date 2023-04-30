#include<stdio.h>
#include<string.h>
int main() {
    char a[3][3];
    char pass[6];

    fgets(pass, 6, stdin);
    printf("Enter password in 3 X 3 form \n");
    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 3;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    char newpass[6];
    for (int i = 0;i < 3;i++) {
        newpass[i] = a[i][i];
    }
    for (int i = 0;i < 3;i++) {
        int j = 3 - i - 1;
        newpass[3 + i] = a[i][j];
    }
    if (strcmp(pass, newpass) == 0) {
        printf("Correct password");
    }
    else {
        printf("Wrong password");
    }
}