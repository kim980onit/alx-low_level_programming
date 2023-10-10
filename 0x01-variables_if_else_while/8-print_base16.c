#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
char c;

for (c = '0'; c <= 'f'; c++)
{
if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f'))
{
putchar(c);
}
}
putchar('\n');
return (0);
}
