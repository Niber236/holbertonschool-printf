#include "main.h"

/**
 * print_string - Affiche une chaîne de caractères
 * @arg: liste des arguments contenant la string
 *
 * Retour: nombre de caractères affichés
 */
int print_string(va_list arg)
{
    char *str = va_arg(arg, char *);
    int count = 0;

    /* Si la string est NULL, on affiche (null) */
    if (str == NULL)
        str = "(null)";

    while (str[count])
    {
        _putchar(str[count]);
        count++;
    }

    return (count);
}
