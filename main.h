#ifndef PRINT_F
#define PRINT_F
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
void (*get_spec_func(char a))(char *str);
void (*get_spec_func_int(char a))(int n);
void print_str(char *s);
int char_comp(char *c1, char c2);
int _strlen(char *s);
void print_int(int);
int find_int_length(int);

/**
 * struct format_spec - structure
 * @spec: specifier
 * @f: input
 * @str: string
 * Description: structure
 */
typedef struct format_spec
{
	char *spec;
	void (*f)(char *str);
} forspec;

typedef struct format_spec_int
{
	char *spec;
	void (*f)(int n);
} forspec_int;

#endif
