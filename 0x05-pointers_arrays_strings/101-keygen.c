#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
    srand(time(NULL));

    char password[PASSWORD_LENGTH + 1];
    const char charset[] = "abcdefghijklmnopqrstuvwxyz0123456789";

    int i;

    /* Generate a password using sequential characters from charset */
    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = charset[i % (sizeof(charset) - 1)];
    }

    password[PASSWORD_LENGTH] = '\0';

    printf("%s\n", password);

    return 0;
}
