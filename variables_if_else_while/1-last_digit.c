#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - funcion que hace tal cosita
 *
 * Return: 0
 *
 */
int main(void)
{
	int n, ultimo_digito;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ultimo_digito = n % 10;
	if (ultimo_digito > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ultimo_digito);
	else if (ultimo_digito == 0)
		printf("Last digit of %d is %d and is 0\n", n, ultimo_digito);
	else if (ultimo_digito < 6 && ultimo_digito != 0)
	{
		printf("Last digit of %d is %d and is less", n, ultimo_digito);
		printf(" than 6 and not 0\n");
	}
	return (0);
}
