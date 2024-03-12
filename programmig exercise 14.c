#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

void removeLeadingTrailingBlanks(char *str) {
    int i, j;

    // Remove leading blanks
    while (*str == ' ') {
        str++;
    }

    // Remove trailing blanks
    i = strlen(str) - 1;
    while (str[i] == ' ' && i >= 0) {
        i--;
    }
    str[i + 1] = '\0';
}

char *getLastName(char *str) {
    char *lastName = strrchr(str, ' '); // Find the last occurrence of ' '
    if (lastName != NULL) {
        // Return the string after the last ' ' character
        return lastName + 1;
    } else {
        // If no ' ' found, return the entire string
        return str;
    }
}

int main() {
    char fullName[MAX_LENGTH];

    // Input
    printf("Enter first name followed by a blank followed by last name: ");
    fgets(fullName, MAX_LENGTH, stdin);

    // Remove leading and trailing blanks
    removeLeadingTrailingBlanks(fullName);

    // Extract last name
    char *lastName = getLastName(fullName);

    // Output
    printf("Last name: %s\n", lastName);

    return 0;
}
