#ifndef MAIN_H
#define MAIN_H

/* Task 0: Concatenate two strings */
char *_strcat(char *dest, char *src);

/* Task 1: Concatenate n bytes of src to dest */
char *_strncat(char *dest, char *src, int n);

/* Task 2: Copy n bytes from src to dest */
char *_strncpy(char *dest, char *src, int n);

/* Task 3: Compare two strings */
int _strcmp(char *s1, char *s2);

/* Task 4: Reverse the content of an array */
void reverse_array(int *a, int n);

/* Task 5: Convert string to uppercase */
char *string_toupper(char *);

/* Task 6: Capitalize first letter of words */
char *cap_string(char *);

/* Task 7: Encode a string into "1337" */
char *leet(char *);

#endif /* MAIN_H */

