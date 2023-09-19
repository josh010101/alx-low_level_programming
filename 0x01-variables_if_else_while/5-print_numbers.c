#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program prints the digits from '0' to '9'
 * followed by a newline character.
 *
 * Return: 0 to indicate successful execution
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}

