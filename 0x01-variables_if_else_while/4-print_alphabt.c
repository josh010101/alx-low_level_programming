#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: This program prints the lowercase alphabet
 * excluding the letters 'e' and 'q', followed by a newline character.
 *
 * Return: 0 if successful, a non-zero value if an error occurs.
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
		continue;
		putchar(i);
	}

	putchar('\n');
	return (0);
}

