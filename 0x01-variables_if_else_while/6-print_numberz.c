#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all single decimal numbers starting from 0
 *
 * Return: returns 0 (Success)
 */

int main(void)
{
	int x;

	do {
		putchar(x + '0');
		x++;
	} while (x <= 9);
	putchar('\n');
	return (0);
}

