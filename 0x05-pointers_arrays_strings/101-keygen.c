#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char password[13];
    const char charset[] = "abcdefghijklmnopqrstuvwxyz0123456789";
    int password_length = 12;
    int i;
    
    
    srand(time(NULL));
    /* Generate a password using sequential characters from charset */
    for (i = 0; i < password_length; i++)
    {
        password[i] = charset[i % (sizeof(charset) - 1)];
    }

    password[password_length] = '\0';

    printf("%s\n", password);

    return 0;
}
