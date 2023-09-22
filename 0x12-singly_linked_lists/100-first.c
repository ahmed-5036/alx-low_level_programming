#include <stdio.h>

/**
 * hare_and_tortoise - Prints the message before the main function.
 */
void __attribute__((constructor)) hare_and_tortoise(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}
