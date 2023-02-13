/*2. Write a c program to sort 10 city names stored in two dimensional arrays, taken from
the user.*/

#include <stdio.h>
#include <string.h>

void swap(char *str1, char *str2) {
    char temp[100];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

int main() {
    int i, j;
    char cities[10][100];
    printf("Enter 10 city names: \n");
    for (i = 0; i < 10; i++) {
        scanf("%s", cities[i]);
    }
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (strcmp(cities[i], cities[j]) > 0) {
                swap(cities[i], cities[j]);
            }
        }
    }
    printf("\nSorted City Names: \n");
    for (i = 0; i < 10; i++) {
        printf("%s\n", cities[i]);
    }
    return 0;
}
