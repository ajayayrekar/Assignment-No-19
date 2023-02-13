//3. Write a c program to read and display a 2D array of strings in C language.

#include <stdio.h>
#include <string.h>

int main() {
    int i, j;
    char strings[5][100];
    printf("Enter 5 strings: \n");
    for (i = 0; i < 5; i++) {
        scanf("%s", strings[i]);
    }
    printf("\nDisplaying strings: \n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", strings[i]);
    }
    return 0;
}
