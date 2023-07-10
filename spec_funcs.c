#include "main.h"
/**
 * print_str - prints a given string
 * @s: string to be printed
 * Return: nothing
 */
void print_str(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		_putchar (s[index]);
		index++;
	}
}

/**
 * print_int - prints int
 * @num: int
 * Return: nothing
 */
void print_int(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num / 10)
	{
		print_int(num / 10);
	}
	_putchar(num % 10 + '0');
}
