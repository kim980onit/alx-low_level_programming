#include <stdio.h>

/**
* main - Entry point
*
* Description: Print the first 98 Fibonacci numbers
*
* Return: Always 0
*/
int main(void)
{
unsigned long first = 1;
unsigned long second = 2;
unsigned long next;
int count;

printf("%lu, %lu", first, second);

for (count = 3; count <= 96; count++)
{
next = first + second;
printf(", %lu", next);

first = second;
second = next;
}

printf("\n");

return (0);
}
