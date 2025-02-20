#include <stdio.h>


/**
 * main - imprime varias cosillas
 *
 * Return 0
 * Test
 */
int main(void)
{
	/*Tipo de datos a declarar*/
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	/*Imprimer el valor de tgamaño en dos diferentes arquitecturas*/
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
