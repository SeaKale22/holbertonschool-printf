#include "main.h"
#include <stdarg.h>
/**
 * _printf- produces output according to format
 * @format: a character string containing 0 or more directives
 *
 * Returns: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list conversions;
	int i;
	void (*spec_func)(char *str);

	va_start(conversions, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '%')
			{
				if (format[i + 1] == 'c')
				{
					_putchar(va_arg(conversions, int));
				}
				else
				{
					spec_func = get_spec_func(format[i + 1]);
					spec_func(va_arg(conversions, char *));
				}
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
