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
	if (num == 0)
	{
		_putchar('0');
		return;
	}
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	int num_digits = 0;
	int temp = num;

	while (temp > 0)
	{
		temp /= 10;
		num_digits++;
	}
	while (num_digits > 0)
	{
		int divisor = 1;

		for (int i = 1; i < num_digits; i++)
		{
			divisor *= 10;
		}
		int digit = num / divisor;

		_putchar('0' + digt);
		num %= divisor;
		num_digits--;
}
