#include "main.h"


/**
 * print_alphabet - programa que imprime mediante funcion
 *
 *
 * Return: void
 *
 */
void print_alphabet(void) /*funcion que regresa el abecedario*/
{
	/*declaramos la variable*/
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i); /*esta funcion es la que creamos en el ejercicio*/
	}

	_putchar('\n');
}
