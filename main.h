#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>


typedef struct {
    char type;
    int (*func)(va_list);
} print_handler;




int _printf(const char *format, ...);


int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list list);
int _putchar(char c);

int handle_format_specifier(char specifier, va_list args);

#endif
