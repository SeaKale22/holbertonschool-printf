#include "main.h"
/**
 * _printf- produces output according to format
 * @format: a character string containing 0 or more directives
 *
 * Returns: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '%')
			{
			}
			else
			{
				_putchar('%');
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
		}

	}
}
