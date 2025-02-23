#include "main.h"

/**
  * jack_bauer - imprimer reloj 24 horas
  *
  * Return: cero xD
  *
  */
void jack_bauer(void)
{
	int i;
	int j;
	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(':');
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			_putchar('\n');
		}
		}
	}
