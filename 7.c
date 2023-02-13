//7. From the list of IP addresses, check whether all ip addresses are valid.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 16

int is_valid_ip(char *ip_address) {
int i, num, dots = 0;
char *ptr;

if (strlen(ip_address) > MAX_LEN)
return 0;

ptr = strtok(ip_address, ".");

if (ptr == NULL)
return 0;

while (ptr) {
++dots;
}

if (dots != 4)
return 0;

return 1;
}

int main() {
char ip_address[MAX_LEN];
printf("Enter an IP address: ");
scanf("%s", ip_address);

if (is_valid_ip(ip_address)) {
printf("Valid IP address\n");
} else {
printf("Invalid IP address\n");
}

return 0;
}
