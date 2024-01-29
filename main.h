#ifndef pragma
#define pragma
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
int _printf(const char *format, ...);
/**
 * _printf - prints name
 * @format: name
 * Return: int
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0, z = 0;

	char str[1024];

	char *temp;

	va_list args;

	va_start(args, format);

	while (format[i])
	{
		if (format[i] != '%')
		{
			str[j] = format[i];
			i++;
			j++;
			continue;
		}
		else if (format[i] = '%' && format[i + 1] = 'c')
		{
			str[j] = va_arg(args, int);
			j++;
			i = i + 2;
			continue;
		}
		else if (format[i] = '%' && format[i + 1] = '%')
		{
			str[j] = '%';
			j++;
			i = i + 2;
			continue;
		}
		else if (format[i] = '%' && format[i + 1] = 's')
		{
			temp = va_arg(args, char *);
			while (temp[z])
			{
				str[j] = temp[z];
				j++;
				z++;
				continue;
			}
			i = i + 2;
			continue;
		}
	}
	va_end(args);
	write(1, str, j);
	return (j);
}
#endif
