#include<stdio.h>
#include<string.h>
int main() {
    char word[100];
    int upper, lower, digits, space, special = 0;

    fgets(word, 100, stdin);
    int n = strlen(word);
    for (int i = 0;i < n;i++) {
        if (isupper(word[i])) {
            printf("Uppercase :%c\n", word[i]);
            upper++;
        }
        else if (islower(word[i])) {
            printf("Lowercase %c\n", word[i]);
            lower++;
        }
        else if (isdigit(word[i])) {
            printf("Digits %c\n", word[i]);
            digits++;
        }
        else if (isspace(word[i])) {
            printf("Space \n");
            space++;
        }
        else if (i == n - 1) {
            break;
        }
        else {
            printf("Special %c\n", word[i]);
            special++;
        }
    }

    printf("Uppercase:%d\nLowercase:%d\nDigits:%d\nSpace:%d\nSpecial:%d\n", upper, lower, digits, space, special);
}