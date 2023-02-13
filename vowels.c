/*1. Write a c program to find the number of vowels in each of the 5 strings stored in two
dimensional arrays, taken from the user.*/

#include <stdio.h>
#include <string.h>

int count_vowels(char str[]) {
    int count = 0, i;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }
    return count;
}

int main() {
    int i, j;
    char strings[5][100];
    printf("Enter 5 strings: \n");
    for (i = 0; i < 5; i++) {
        scanf("%s", strings[i]);
    }
    printf("\nVowel Counts: \n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", count_vowels(strings[i]));
    }
    return 0;
}
