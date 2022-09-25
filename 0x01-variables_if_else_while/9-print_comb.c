#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main block
 * Description: Get a random number and print
 *positive,negative or zero
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit;
for (digit = '0'; digit <= 9; digit++)
{
putchar(digit);
if (digit == '9')
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
