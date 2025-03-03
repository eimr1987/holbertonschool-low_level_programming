#include "main.h"

/**
 * print_array - Imprime un array de n elementos
 * @a: arreglo
 * @n: n elementos
 * Return: cero
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
