#include <stdio.h>


/**
 * print_to_98 - Imprime hasta el 98 :D
 *
 * @n: operador
 *
 * Return: impresiones
 *
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printf("%d", n);
		return (0);
	}

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
		return (0);
	}
        if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
		}
		return (0);
	}
}
