#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int j = 0, start = 0;
	char *a;

	va_start(list, format);
	while (format && format[j] != '\0')
	{
		switch (format[j])
		{ case 'c':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%c", va_arg(list, int));
			break;
			case 'i':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%i", va_arg(list, int));
			break;
		case 'f':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%f", va_arg(list, double));
			break;
		case's':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			a = va_arg(list, char*);
			if (a)
			{ printf("%s", a);
			break; }
			printf("%p", a);
			break; }
		j++;
	}
	printf("\n");
	va_end(list);
}
