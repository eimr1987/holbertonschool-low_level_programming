#include "main.h"

/**
 * print_numbers - imprime numeros del cero al nueve.
 *
 * Return: cero
 */
void print_numbers(void)
{

	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar (i);
	}
	_putchar('\n');
	return (0);
}
