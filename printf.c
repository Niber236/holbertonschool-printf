#include "main.h"

/**
 * _printf - Fonction personnalisée qui imite printf
 * @format: chaîne contenant le texte + les formats (%c, %s, %%)
 *
 * Return: nombre total de caractères affichés
 */
int _printf(const char *format, ...)
{
    va_list args;
    int i = 0, count = 0;

    /* Si format est NULL → erreur */
    if (format == NULL)
        return -1;

    va_start(args, format);

    while (format[i])
    {
        /* Si on tombe sur '%' → spécificateur */
        if (format[i] == '%')
        {
            i++; /* On avance pour lire ce qu’il y a après '%' */

            if (format[i] == 'c')
                count += print_char(args);

            else if (format[i] == 's')
                count += print_string(args);

            else if (format[i] == '%')
                count += print_percent();

            else
            {
                /* Spécificateur inconnu → on affiche tel quel */
                write(1, "%", 1);
                write(1, &format[i], 1);
                count += 2;
            }
        }
        else
        {
            /* Caractère normal → on l'affiche */
            write(1, &format[i], 1);
            count++;
        }

        i++;
    }

    va_end(args);
    return count;
}
