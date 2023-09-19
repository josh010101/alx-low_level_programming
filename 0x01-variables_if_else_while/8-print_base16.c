#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: Prints the hexadecimal digits from '0' to 'f'
 * followed by a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char hexvalues[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
		putchar(hexvalues[i]);
	putchar('\n');
	return (0);
}
