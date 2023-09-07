#include <stdio.h>

/**
 * main - An entry point for the program
 *
 * Description: Function that prints the size of different datatypes as 
 * stringed integers using the sizeof() function
 * Return: 0
 */

int main(void)
{
	printf("Size of a char: %1d byte(s)\n", sizeof(char));
	printf("Size of an int: %1d byte(s)\n", sizeof(int));
	printf("Size of a long int: %1d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %1d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %1d byte(s)\n", sizeof(float));
	return (0);
}
