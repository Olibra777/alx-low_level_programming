#include <stdio.h>
/**
 * main - entry point
 *
 * Description: to ptint alphabet in lower case
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
