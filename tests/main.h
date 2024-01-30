#ifndef pragma
#define pragma
#include <stdarg.h>
#include <stdio.h>
int _printf(const char *format, ...);
/**
 * _printf - prints name
 * @format: name
 * Return: int
 */
int _printf(const char *format, ...)
{
	int i, count = 0;

	va_list args;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				switch (format[i++])
					{
						case 'c':
							{
								char c = va_arg(args, int);

								putchar(c);
								count++;
								break;
							}
						case 's':
							{
								char *s = va_arg(args, char*);

								while(*s)
									{
										putchar(*s++);
										count++;
									}
								break;
							}
						case '%':
							{
								putchar('%');
								count++;
								break;
							}
						default:
						break;
					}
			}
			else 
			{
				putchar(format[i]);
				count++;
			}
		}
	va_end(args);
	return(count);
}
#endif
