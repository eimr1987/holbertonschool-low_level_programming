#include <stdio.h>


/**
 * main - imprime de la a a la z en minusculas, excepto q y e
 *
 * Return: 0
 *
 */
int main(void)
{
	char letra = 'a';

	while (letra <= 'z')
	{
		if (letra != 'q' && letra != 'e')
			putchar(letra);
		letra++;
	}
	putchar('\n');
	return (0);
}
