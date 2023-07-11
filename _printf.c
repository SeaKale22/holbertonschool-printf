#include "main.h"
/**
 * _printf- produces output according to format
 * @format: a character string containing 0 or more directives
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list conversions;
	int i;
	int count = 0;
	void (*spec_func)(char *str);
	void (*spec_func_int)(int n);
	char *tempstr;
	int tempnum;

	va_start(conversions, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '%')
			{
				if (format[i + 1] == 'd' || format[i + 1] == 'i')
				{
					spec_func_int = get_spec_func_int(format[i + 1]);
					tempnum = (va_arg(conversions, int));
					spec_func_int(tempnum);
					i++;
					count += find_int_length(tempnum);
					continue;
				}
				if (format[i + 1] == 'c')
				{
					_putchar(va_arg(conversions, int));
					count++;
				}
				else if (format[i + 1] != 'c')
				{
					spec_func = get_spec_func(format[i + 1]);
					if (spec_func == NULL)
					{
						_putchar('%');
						count++;
						continue;
					}
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
