#Printf
###by Matthew Krozel and Kaleb Kuykendall


The intention of this project was to learn how to work in groups and to create a function similar to the printf function from the standard library.

##_printf
Our function prints to the standard output according the the format specified in the arguments.
Conversion specifiers can be used to what is printed and how, using the additional argumants if there are any.
Valid conversion specifiers are:

+ %c - %c can be used to specify a character to print
+ %s - %s is used to specify a string of characters to print
+ %d - %d is used to specify a decimal (base 10) number
+ %i - %i is used to specify an interger in base 10

##Useage
In order to properly use, all .c files must be complied together. Here is a suggestion compile method:

+ $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

### Example Use 

```

#include "main.h"

int main(void)
{
	_printf("Hello World");
	_printf("%d apples", 5);
	_printf("Give %s", "thanks");
}


