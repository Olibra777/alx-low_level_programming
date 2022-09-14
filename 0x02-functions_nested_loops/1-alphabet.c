#include "main.h"
/**
 * prints_alphabet - entry point func
 *
 * Description: prints the alpabet, in lower case
 * Return: 0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		ch++;
	}
	_putchar('\n');
}
