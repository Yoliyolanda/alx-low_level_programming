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
int c;
for (c = '0'; c <= 9; c++)
{
putchar(c);
if (c != '9')
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
