/*9. Write a program that asks the user to enter a username. If the username entered is
one of the names in the list then the user is allowed to calculate the factorial of a
number. Otherwise, an error message is displayed*/

#include <stdio.h>
#include <string.h>

#define MAX_USERS 5
#define MAX_NAME_LENGTH 20

int factorial(int n) {
  int result = 1;
  for (int i = 2; i <= n; i++) {
    result *= i;
  }
  return result;
}

int main() {
  char users[MAX_USERS][MAX_NAME_LENGTH] = {"user1", "user2", "user3", "user4", "user5"};
  char username[MAX_NAME_LENGTH];
  int i, user_found = 0;
  int n, fact;

  printf("Enter your username: ");
  scanf("%s", username);

  for (i = 0; i < MAX_USERS; i++) {
    if (strcmp(username, users[i]) == 0) {
      user_found = 1;
      break;
    }
  }

  if (user_found) {
    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);
    fact = factorial(n);
    printf("The factorial of %d is %d\n", n, fact);
  } else {
    printf("Error: username not found\n");
  }

  return 0;
}
