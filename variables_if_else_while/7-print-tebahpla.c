#include <stdio.h>


/**
 * main - imprime de la z a la a en minusculas
 *
 * Return: 0
 *
 */
int main(void)
{
	char letra = 'z';

	while (letra >= 'a')
	{
		putchar(letra);
		letra--;
	}
	putchar('\n');
	return (0);
}
