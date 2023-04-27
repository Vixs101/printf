#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int printchar(va_list args);
int printstring(va_list args);
int printpercent(va_list args);
int print_int(va_list args);
int _printf(const char *format, ...);

#endif /* MAIN_H*/
