#include "main.h"

/**
 * print_line - imprime _, dependiente dl número enviado
 *
 * @n: validacion
 *
 * Return: cero
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		else
		{
			_putchar('_');
			_putchar('\n');
		}
	}
}
