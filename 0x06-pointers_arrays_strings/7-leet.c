/**
 * leet - Encodes a string into "1337" text
 * @str: The input string
 *
 * Return: Pointer to the modified string
 */
char *leet(char *str)
{
char *ptr = str;
char *leet_replace = "aAeEoOtTlL";
char *leet_with = "4433007711";
while (*ptr)
{
for (int i = 0; i < 10; i++)
{
if (*ptr == leet_replace[i])
{
*ptr = leet_with[i];
break;
}
}
ptr++;
}
return (str);
}
