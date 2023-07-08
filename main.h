#ifndef PRINT_F
#define PRINT_F
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
void (*get_spec_func (char a))(char *str);
void print_str(char *s);
int char_comp(char *c1, char c2);

/**
 * struct format_spec - structure
 * @spec: specifier
 * Description: structure
 */
typedef struct format_spec
{
	char *spec;
	void (*f)(char *str);
} forspec;

#endif
