#include "main.h"

/**
 * print_char - Affiche un caractère
 * @args: liste d'arguments variadiques
 *
 * Return: nombre de caractères imprimés (toujours 1)
 */
int print_char(va_list args)
{
    char c = va_arg(args, int); /* Les chars sont passés en int dans va_arg */
    return write(1, &c, 1);
}
