/*5. Suppose we have a list of email addresses, check whether all email addresses have
‘@’ in it. Print the odd email out.*/

#include <stdio.h>
#include <string.h>

#define MAX_EMAILS 100
#define MAX_LENGTH 100

int main()
{
    char listOfEmails[MAX_EMAILS][MAX_LENGTH];
    int numEmails, i;

    printf("Enter the number of email addresses: ");
    scanf("%d", &numEmails);

    printf("Enter the email addresses: \n");
    for (i = 0; i < numEmails; i++) {
        scanf("%s", listOfEmails[i]);
    }

    for (i = 0; i < numEmails; i++) {
        if (strchr(listOfEmails[i], '@') == NULL) {
            printf("Invalid email address: %s\n", listOfEmails[i]);
        }
        else if (i % 2 != 0) {
            printf("Odd email address: %s\n", listOfEmails[i]);
        }
    }

    return 0;
}
