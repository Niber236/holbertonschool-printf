#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* Prototype principal */
int _printf(const char *format, ...);

/* Fonctions pour gérer chaque type */
int print_char(va_list args);
int print_string(va_list args);
int print_percent(void);
int _putchar(char c);


#endif
