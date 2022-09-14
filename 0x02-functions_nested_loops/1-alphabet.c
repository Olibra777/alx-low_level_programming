#include "main.h"
/**
 * prints_alphabet - entry point func
 *
 * Description: prints the alpabet, in lower case
 * Return: 0
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
