//10. Create an authentication system. It should be menu driven.

#include <stdio.h>
#include <string.h>

#define MAX_USERS 5
#define MAX_NAME_LENGTH 20
#define MAX_PASSWORD_LENGTH 20

void login() {
  char users[MAX_USERS][MAX_NAME_LENGTH] = {"user1", "user2", "user3", "user4", "user5"};
  char passwords[MAX_USERS][MAX_PASSWORD_LENGTH] = {"pass1", "pass2", "pass3", "pass4", "pass5"};
  char username[MAX_NAME_LENGTH];
  char password[MAX_PASSWORD_LENGTH];
  int i, user_found = 0;

  printf("Enter your username: ");
  scanf("%s", username);

  for (i = 0; i < MAX_USERS; i++) {
    if (strcmp(username, users[i]) == 0) {
      user_found = 1;
      break;
    }
  }

  if (user_found) {
    printf("Enter your password: ");
    scanf("%s", password);
    if (strcmp(password, passwords[i]) == 0) {
      printf("Login successful\n");
    } else {
      printf("Error: invalid password\n");
    }
  } else {
    printf("Error: username not found\n");
  }
}

void signup() {
  char users[MAX_USERS][MAX_NAME_LENGTH];
  char passwords[MAX_USERS][MAX_PASSWORD_LENGTH];
  char username[MAX_NAME_LENGTH];
  char password[MAX_PASSWORD_LENGTH];
  int i, user_exists = 0;

  printf("Enter a new username: ");
  scanf("%s", username);

  for (i = 0; i < MAX_USERS; i++) {
    if (strcmp(username, users[i]) == 0) {
      user_exists = 1;
      break;
    }
  }

  if (user_exists) {
    printf("Error: username already exists\n");
  } else {
    printf("Enter a password: ");
    scanf("%s", password);
    strcpy(users[i], username);
    strcpy(passwords[i], password);
    printf("Signup successful\n");
  }
}

int main() {
  int choice;

  printf("1. Login\n");
  printf("2. Signup\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);

  switch (choice) {
    case 1:
      login();
      break;
    case 2:
      signup();
      break;
    default:
      printf("Error: invalid choice\n");
  }

  return 0;
}
