#include "main.h"

/**
 * fizzBuzzTest - programa que imprime cosas enviadas del mal
 *
 * Return: cero
 *
 */
void fizzBuzzTest(void)
{
	int i, multiple;

	for (i = 1; i <= 100; i++)
	{
		multiple3 = i mod 3;
		multiple5 = i mod 5;

		if ((i mod 3)  == 0)
		{
			printf("Fizz ");
		}
		else if ((i mod 5)  == 0)
		{
			printf("Buzz ");
		}
		else if (((i mod 3)  == 0)  && ((i mod 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else
			printf("%d ", i);
	}
	printf("\n");
}
