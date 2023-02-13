//4. Write a c program to search a string in the list of strings.

#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 100
#define MAX_LENGTH 100

int main()
{
    char listOfStrings[MAX_STRINGS][MAX_LENGTH];
    int numStrings, i;
    char searchString[MAX_LENGTH];

    printf("Enter the number of strings: ");
    scanf("%d", &numStrings);

    printf("Enter the strings: \n");
    for (i = 0; i < numStrings; i++) {
        scanf("%s", listOfStrings[i]);
    }

    printf("Enter the search string: ");
    scanf("%s", searchString);

    int found = 0;
    for (i = 0; i < numStrings; i++) {
        if (strcmp(listOfStrings[i], searchString) == 0) {
            printf("String found at index %d\n", i);
            found = 1;
        }
    }

    if (!found) {
        printf("String not found\n");
    }

    return 0;
}
