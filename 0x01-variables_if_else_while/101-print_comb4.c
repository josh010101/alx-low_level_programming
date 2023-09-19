#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program prints all combinations of three different digits
 * from '012' to '789', separated by commas and spaces,
 * followed by a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int one;
	int ten;
	int hundred;

	for (hundred = '0'; hundred <= '9'; hundred++)
	{
		for (ten = (hundred + 1); ten <= '9'; ten++) /* Hundreds place */
		{
			for (one = (ten + 1); one <= '9'; one++) /* Tens = 100s + 1 */
			{
				putchar(hundred);
				putchar(ten);
				putchar(one);

				if (hundred != '7' || ten != '8' || one != '9') /* Ones */
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
