#include "main.h"

/**
 * char_comp - compares string to a char
 * @c1: string of a single char
 * @c2: char 2
 * Return: 0 if equal and 1 if not
 */

int char_comp(char *c1, char c2)
{
	if (c1[0] == c2)
		return (0);
	else
		return (1);
}
