#include "main.h"

/**
 * get_spec_func - takes a character and returns a pointer that returns void
 * @a: character
 * Return: void
 */

void (*get_spec_func(char a))(char *str)
{
	forspec specs[] = {
		{"s", print_str},
		{"c", print_char},
		{NULL, NULL}
	};
	int i = 0;

	while (specs[i].spec != NULL)
	{
		if (char_comp(specs[i].spec, a) == 0)
		{
			return (specs[i].f);
		}
		i++;
	}
	return (NULL);
}


