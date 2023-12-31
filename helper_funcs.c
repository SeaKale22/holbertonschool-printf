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

/**
 * _strlen - checks length of string
 * @s:string
 * Return: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * find_int_length - finds length of int
 * @num: int
 * Return: int
 */

int find_int_length(int num)
{
	int length = 0;
	if (num == 0)
	{
		return (1);
	}
	if (num < 0)
	{
		length++;
		num = -num;

	}
	while (num != 0)
	{
		length++;
		num /= 10;
	}
	return (length);
}
