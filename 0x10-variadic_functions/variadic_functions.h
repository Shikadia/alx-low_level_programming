#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


/**
 * struct format - A struct type defining a format
 * @id: The format identifier
 * @id_fun: The identifier's function
 */
typedef struct fmt
{
	char *id;
	void (*id_fun)(va_list arg);

} fr_t;


#endif
