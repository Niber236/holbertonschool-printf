#include <unistd.h>

/* Fonction qui écrit un seul caractère sur stdout */
int _putchar(char c)
{
    return write(1, &c, 1);
}
