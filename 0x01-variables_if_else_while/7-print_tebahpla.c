#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program prints the lowercase letters from 'z' to 'a'
 * followed by a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
