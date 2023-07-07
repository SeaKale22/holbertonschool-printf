#include "main.h"

/**
 * get_spec_func - takes a character and returns a pointer that returns void
 * a: character
 * Return: void
 */

void (*get_spec_func(char a))(char *str)
{
	forspec spec[] = {
		{"s", print_str},
		{"c", print_char}
	};
}
