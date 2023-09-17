#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - prints anything.
 * @format: is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0, flag;
	char *str;
	va_list f_list;

	va_start(f_list, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(f_list, int));
				flag = 0;
				break;
			case 'i':
				printf("%d", va_arg(f_list, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(f_list, double));
				flag = 0;
				break;
			case 's':
				str = va_arg(f_list, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(f_list);
}
