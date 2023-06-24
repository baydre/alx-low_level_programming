/*
 * variadic_functions, Task 3: function that prints anything.
 */
#include "variadic_functions.h"

/**
 * print_all - takes "format" string to print a variable number
 * of arguments based on the format string provided
 * @format: specifies the necessary operations to perform
 * when printing arguments.
 */
void print_all(const char * const format, ...)
{
	unsigned int b = 0;
	unsigned int tag;
	char *str;
	va_list _args;

	va_start(_args, format);

	while (format != NULL && format[b] != '\0')
	{
		switch (format[b])
		{
			case 'c':
				printf("%c", va_arg(_args, int));
				tag = 0;
				break;
			case 'i':
				printf("%i", va_arg(_args, int));
				tag = 0;
				break;
			case 'f':
				printf("%f", va_arg(_args, double));
				tag = 0;
				break;
			case 's':
				str = va_arg(_args, char*);
				if (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s", str);
				tag = 0;
				break;
			default:
				tag = 1;
				break;
		}

		if (format[b + 1] != '\0' && tag == 0)
		{
			printf(", ");
		}

		b++;
	}

	va_end(_args);
	printf("\n");
}
