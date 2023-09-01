#ifndef MAIN_H
#define MAIN_H

/* putchar function */
int _putchar(char c);

/* Task 0: _puts_recursion */
void _puts_recursion(char *s);

/* Task 1: _print_rev_recursion */
void _print_rev_recursion(char *s);

/* Task 2: _strlen_recursion */
int _strlen_recursion(char *s);

/* Task 3: factorial */
int factorial(int n);

/* Task 4: _pow_recursion */
int _pow_recursion(int x, int y);

/* Task 5: _sqrt_recursion */
int _sqrt_recursion(int n);
int calculate_sqrt(int n, int guess);
/* Task 6: is_prime_number */
int is_prime_number(int n);
int is_prime_helper(int n, int divisor);

/* Task 7 */
int is_palindrome(char *s);
int _strlen(char *s);
int check_palindrome(char *s, int start, int end);
/* Task 8 */
int wildcmp(char *s1, char *s2);
#endif /* MAIN_H */

