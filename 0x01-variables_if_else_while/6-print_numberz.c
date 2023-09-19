#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program prints the digits from '0' to '9'
 * followed by a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
