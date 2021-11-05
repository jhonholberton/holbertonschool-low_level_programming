#include "variadic_functions.h"

/**
 * print_all - Write a function that prints anything.
 * @format: list of types of arguments
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *p;
	va_list j;

	va_start(j, format);
	if (!format)
	{
		printf("\n");
		return;
	}
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(j, int));
			break;
		case 'i':
			printf("%d", va_arg(j, int));
			break;
		case 'f':
			printf("%f", va_arg(j, double));
			break;
		case 's':
			p = va_arg(j, char *);
			p ? printf("%s", p) : printf("(nil)");
			break;
		default:
			i++;
			continue;
		}
		i++;
		if (format[i] != '\0')
			printf(", ");
	}
	printf("\n");
}
