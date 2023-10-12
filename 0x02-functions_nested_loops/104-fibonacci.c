#include <stdio.h>
/**
* main _ The main function
*Description: Print the first 98 Fibonacci numbers
* 1 and 2, separated by a comma
* Return: 0.
*/

int main(void)
{
int count;
unsigned long fib1 = 1, fib2 = 2, sum;

for (count = 0; count < 97; count++)
{
printf("%lu, ", fib1);
sum = fib1 + fib2;
fib1 = fib2;
fib2 = sum;
}
printf("%lu\n", fib1);


return (0);
}
