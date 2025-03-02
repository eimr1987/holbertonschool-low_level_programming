#include "main.h"


/**
 * print_most_numbers - imprimer del 0 al 9, ignorar 2 y 4;
 *
 * Return: cero
 */
void print_most_numbers(void)
{

	int i;

	for (i = '0'; i <= '9'; i++)
	{

		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
