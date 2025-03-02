#include "main.h"

/**
 * more_numbers - funcion imprimer del 0 al 14, 10 veces
 *
 * Return: cero
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}

}
