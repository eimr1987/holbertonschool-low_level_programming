#include "main.h"


/**
  * jack_bauer - imprimer reloj 24 horas
  *
  * Return: cero xD
  *
  */
void jack_bauer(void)
{
	for (int i = 0; i <= 23; i++)
	{
		for (int j = 0; j <= 59; j++)
		{
			if (i <= 9)
			{
				if (j <= 9)
				{
					printf("0%d:0%d\n", i, j);
				}
				else
				{
					printf("0%d:%d\n", i, j);
				}
			}
			else
			{
				if (j <= 9)
				{
					printf("%d:0%d\n", i, j);
				}
				else
				{
					printf("%d:%d\n", i, j);
				}
			}
		}
	}
}
