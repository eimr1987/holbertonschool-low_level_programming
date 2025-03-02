#include "main.h"
#include <stdio.h>

/**
 * fizzBuzzTest - programa que imprime cosas enviadas del mal
 *
 * Return: cero
 *
 */
void fizzBuzzTest(void)
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
			printf("%d ", i);
	}
	printf("\n");
}
