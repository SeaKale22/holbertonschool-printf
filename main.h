#ifndef PRINT_F
#define PRINT_F
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);
int _printf(const char *format, ...);

/**
 * struct format_spec - structure
 * @spec: specifier
 * Description: structure
 */
typedef struct format_spec
{
	char *spec;
} forspec;

#endif
