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
			if (i <= 9)
			{
				if (j <= 9)
				{
					_putchar('0');
					_putchar(i);
					_putchar(':');
					_putchar('0');
					_putchar(j);
					_putchar('\n');
					/*printf("0%d:0%d\n", i, j);*/
				}
				else
				{
					_putchar('0');
					_putchar(i);
				       	_putchar(':');
					_putchar(j);
					_putchar('\n');
					/*printf("0%d:%d\n", i, j);*/
				}
			}
			else
			{
				if (j <= 9)
				{
	                                _putchar('0');
                                        _putchar(i);
                                        _putchar(':');
                                        _putchar('0');
                                        _putchar(j);
                                        _putchar('\n');
					/*printf("%d:0%d\n", i, j);*/
				}
				else
				{
					_putchar(i);
					_putchar(':');
					_putchar(j);
					_putchar('\n');
					/*printf("%d:%d\n", i, j);*/
				}
			}
		}
	}
}
