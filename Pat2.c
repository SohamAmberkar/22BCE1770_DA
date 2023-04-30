#include<stdio.h>
int main() {
    char sentence[50];
    printf("Enter sentence: \n");
    gets(sentence, stdin, 50);

    int vowel = 0;
    int consonants = 0;
    int space = 0;
    int special = 0;
    for (int i = 0;i < 37;i++) {
        if ((sentence[i] > 'a' && sentence[i] < 'z') || (sentence[i] > 'A' && sentence[i] < 'Z')) {
            if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u' || sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U') {
                vowel++;
            }
            else {
                consonants++;
            }

        }
        else {
            if (sentence[i] == ' ') {
                space++;
            }
            else if (sentence[i] == '!' || sentence[i] == '@' || sentence[i] == '#' || sentence[i] == '$' || sentence[i] == '%' || sentence[i] == '^' || sentence[i] == '*' || sentence[i] == '&' || sentence[i] == '^') {
                special++;
            }
        }
    }
    printf("Words = %d\n", space + 1);
    printf("Vowels = %d\n", vowel);
    printf("Consonants = %d\n", consonants);
    printf("Space = %d\n", space);
    printf("Special Characters = %d", special);
}