#include "main.h"
#include <stdio.h>

/**
 * main - programa que imprime cosas enviadas del mal
 *
 * Return: cero
 *
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3)  == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5)  == 0)
		{
			printf("Buzz ");
		}
		else if (((i % 3)  == 0)  && ((i % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
