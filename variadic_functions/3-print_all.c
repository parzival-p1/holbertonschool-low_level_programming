#include "variadic_functions.h"
/**
 * print_all - prints all the arguments whe specified
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0, flag;
	char *str;
	va_list valist;

	va_start(valist, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c';
				printf("%c", va_arg(valist, int);
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(valist, int);
				flag = 0;
				break;
			case 's':
				str = var_arg(a_list, char*)
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && falg == 0)
			printf(", ");
		i++;
	}
	printf("\n");
}

