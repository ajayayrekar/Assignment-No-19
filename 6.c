//6. Write a c program to print the strings which are palindrome in the list of strings.

#include<stdio.h>
#include<string.h>
#define MAX_LEN 100

//Function to check if a string is palindrome or not
int isPalindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
            return 0;
    }
    return 1;
}

int main()
{
    char strings[10][MAX_LEN];
    int n, i;

    //Taking input of the number of strings
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    //Taking input of the strings
    printf("Enter %d strings: \n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%s", strings[i]);
    }

    //Printing the palindrome strings
    printf("The palindrome strings are: \n");
    for(i = 0; i < n; i++)
    {
        if(isPalindrome(strings[i]))
        {
            printf("%s\n", strings[i]);
        }
    }
    return 0;
}
