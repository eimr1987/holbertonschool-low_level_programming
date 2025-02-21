#include <stdio.h>


/**
 * main - imprime base 16, es decir, del 0 a la f
 *
 * Return: 0
 *
 */
int main(void)
{
	/*dclaramos la variable bandera*/
	int i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
