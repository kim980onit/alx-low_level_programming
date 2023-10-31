#include <stdlib.h>

/**
* str_concat - function that concatenates two strings.
*
* @s1: first parameter of the first string
* @s2: second parameter of the second string
*
* Return: pointer to the concatenated string
*/
char *str_concat(char *s1, char *s2)
{
size_t i, j, k;
char *ptr;

if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}

i = 0;
while (s1[i] != '\0')
{
i++;
}

j = 0;
while (s2[j] != '\0')
{
j++;
}

ptr = (char *)malloc(sizeof(char) * (i + j + 1));
if (ptr == NULL)
{
return (NULL);
}
for (k = 0; k < i; k++)
{
ptr[k] = s1[k];
}
for (k = 0; k < j; k++)
{
ptr[i + k] = s2[k];
}
ptr[i + j] = '\0';
return (ptr);
}
