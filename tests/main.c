#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    int i;
    int j;

    (void) len;
    (void) len2;
    (void) i;
    (void) j;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");


 i = _printf("Hello, world!\n");
 j = _printf("Hello, world!\n");
_printf("Combine %s and %s\n", "string1", "string2");
_printf("String: %s, Character: %c\n", "Hello", 'A');
_printf("Percentage: %%\n");
_printf("%s\n", "");
printf("%s\n", "");
_printf("%s\n", NULL);
_printf("%c\n", '\0');
printf("%c\n", '\0');
_printf("100%% sure\n");
_printf("Percent % here %\n");
_printf("Incomplete format specifier %\n");
_printf("Just a % with nothing\n");
_printf(NULL);
_printf("Non-printable: %s\n", "\x01\x02\x03");
printf("Non-printable: %s\n", "\x01\x02\x03");
_printf("Line1\nLine2\nLine3\n");
printf("%d\n", i);
printf("%d\n", j);
    return (0);
}
