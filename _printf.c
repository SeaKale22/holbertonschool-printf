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
	int count = 0;
	void (*spec_func)(char *str);
	char *tempstr;

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
					count++;
				}
				else if (format[i + 1] == 's')
				{
					spec_func = get_spec_func(format[i + 1]);
					tempstr = (va_arg(conversions, char *));
					if (tempstr == NULL)
					{
						print_str("(null)");
						count += 6;
					}
					else
					{
						spec_func(tempstr);
						count += _strlen(tempstr);
					}
				}
			}
			else
			{
				_putchar('%');
				count++;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}

	}
	return (count);
}
