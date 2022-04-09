#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print lowercase alphabets in reverse and a newline
 *
 * Return: returns 0 (Success)
 */

int main(void)
{
	char ch;

	ch = 'z';

	do {
		putchar(ch);
		ch--;
	} while (ch >= 'a');
	putchar ('\n');
	return (0);
}

