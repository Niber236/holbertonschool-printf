# Projet : _printf (Task 0)

Implémentation personnalisée de la fonction printf dans le cadre du programme Holberton School.

## Fonctionnalités de la Task 0
Gère les spécificateurs :
- %c → afficher un caractère
- %s → afficher une chaîne de caractères
- %% → afficher un pourcentage

## Fichiers
- _printf.c
- print_char.c
- print_string.c
- print_percent.c
- main.h

## Compilation
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c

## Exemple
_printf("Je suis %s et j'ai %c ans%%\n", "Niber", '5');
