/**
 * cap_string - Capitalizes the first letter of each word in a string
 * @str: The input string
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
char *ptr = str;
int sep_found = 1;

while (*ptr)
{
if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
*ptr == ',' || *ptr == ';' || *ptr == '.' ||
*ptr == '!' || *ptr == '?' || *ptr == '"' ||
*ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
{
sep_found = 1;
}
else if ((sep_found && (*ptr >= 'a' && *ptr <= 'z')))
{
*ptr = *ptr - 32;
sep_found = 0;
}
else
{
sep_found = 0;
}
ptr++;
}
return (str);
}
