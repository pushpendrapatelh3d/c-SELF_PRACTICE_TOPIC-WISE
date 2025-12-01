#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);
    (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
     ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    ? printf("%c is a Vowel", ch)
    : printf("%c is a Consonant", ch);

    return 0;
}
