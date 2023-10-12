#include <stdio.h>


/**
* main - Entry point
*
* Description: This program prints the first 100 Fibonacci numbers.
* Each number is separated by a comma.
*
* Return: Always 0
*/

int main(void)
{
int first = 1, second = 2;
int next, count;
printf("%d, %d, ", first, second);


for (count = 3; count <= 98; ++count)
{
next = first + second;
if (count != 98)
printf("%d, ", next);
else
printf("%d\n", next);


first = second;
second = next;
}


return (0);
}
