#include "main.h"

/**
 * handle_format_specifier - handles a single format specifier
 * @specifier: the format specifier character
 * @args: a va_list containing the arguments for the format specifier
 *
 * Return: The number of characters printed
 */

int handle_format_specifier(char specifier, va_list args)
{
print_handler print_hand[] = {
{'c', print_char},
{'s', print_str},
{'%', print_percent},
{'i', print_int},
{'d', print_int},
{0, NULL}
};

int j = 0;
while (print_hand[j].type)
{
if (print_hand[j].type == specifier)
{
return (print_hand[j].func(args));
}
j++;
}

return (0);
}
