#include "main.h"

/**
 * print_percent - Affiche le caractère '%'
 *
 * Return: toujours 1
 */
int print_percent(void)
{
    char c = '%';
    return write(1, &c, 1);
}
