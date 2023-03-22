#include "main.h"

/* declaration of the print_alphabet function */
void print_alphabet(void);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}

/* definition of the print_alphabet function */
void print_alphabet(void)
{
    char c = 'a';

    while (c <= 'z')
    {
        _putchar(c);
        c++;
    }

    _putchar('\n');
}
