#include "main.h"


/**
 * times_table - Imprime la tabla de multiplicar del 0 al 9
 *
 * Return: 0
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		for (j= 0; j < 10; j++)
		{
			resultado = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (resultado < 10)
				{
					_putchar(' ');
				}
			}

			if (resultado >= 10)
			{
				_putchar('0' + (resultado / 10));
				_putchar('0' + (resultado % 10));
			}
			else
			{
				_putchar('0' + resultado);
			}
		}
		_putchar('\n');
	}
}
