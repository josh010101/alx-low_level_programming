#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program prints the digits from '0' to '9'
 * separated by commas and spaces, followed by a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);

		if (num == '9')
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
