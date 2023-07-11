#include "main.h"

/**
 * get_spec_func - takes a character and returns a pointer that returns void
 * @a: character
 * Return: function pointer or null if no match
 */

void (*get_spec_func(char a))(char *str)
{
	forspec specs[] = {
		{"s", print_str},
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
/**
 * get_spec_func_int - takes a int and returns a pointer
 * @a: character
 * Return: function pointer or null if no match
 */

void (*get_spec_func_int(char a))(int n)
{
	forspec_int specs[] = {
		{"d", print_int},
		{"i", print_int},
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
