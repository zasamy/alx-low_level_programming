#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: format string
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i;
	char *ptr;
	char *space;
	va_list list;

	va_start(list, format);
	i = 0;
	while (format && format[i])
	{
		space = "";
		if (format[i + 1])
			space = ", ";
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(list, int), space);
				break;
			case 'i':
				printf("%d%s", va_arg(list, int), space);
				break;
			case 'f':
				printf("%f%s", va_arg(list, double), space);
				break;
			case 's':
				ptr = va_arg(list, char *);
				if (!ptr || !*ptr)
					ptr = "(nil)";
				printf("%s%s", ptr, space);
				break;
		}
		i++;
	}
	printf("\n");
}
