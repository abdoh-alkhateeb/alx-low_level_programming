#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything.
 * @format: list of types of arguments passed to the function.
 *
 * Return: void.
 */
void print_all(const char *const format, ...)
{
	unsigned int i = 0, n = 0, did_print = 1;
	char *string;
	va_list args;

	va_start(args, format);

	if (format != NULL)
	{
		while (format[n])
			n++;

		while (i < n)
		{
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				string = va_arg(args, char *);
				printf("%s", string == NULL ? "(nil)" : string);
				break;
			default:
				did_print = 0;
			}
			if (i < n - 1 && did_print == 1)
				printf(", ");
			i++;
			did_print = 1;
		}
	}

	printf("\n");
	va_end(args);
}
