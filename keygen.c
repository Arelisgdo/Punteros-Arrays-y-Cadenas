#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

char* generate_password() {
    char* password = malloc((PASSWORD_LENGTH + 1) * sizeof(char)); // +1 for null terminator
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const size_t max_index = sizeof(charset) - 1;

    srand(time(NULL));

    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = charset[rand() % max_index];
    }

    password[PASSWORD_LENGTH] = '\0';

    return password;
}

int main() {
    char* password = generate_password();

    printf("%s", password);

    free(password);

    return 0;
}
