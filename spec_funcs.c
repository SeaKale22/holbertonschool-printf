#include "main.h"
/**
 * print_str- prints a given string
 * @s: string to be printed
 */
void print_str(char *s)
{
	int index = 0;

	if (s == NULL)
	{
		s = (null);
	}
	while (s[index] != '\0')
	{
		_putchar (s[index]);
		index++;
	}
}

