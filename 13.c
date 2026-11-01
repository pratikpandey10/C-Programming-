#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    if (isalpha(ch)) {
        
        (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
         ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            ? printf("%c is a Vowel.\n", ch)
            : printf("%c is a Consonant.\n", ch);
    } else {
        printf("Invalid input. Please enter an alphabetic character.\n");
    }

    return 0;
}