#include"main.h"
/**
 * print_alphabet_x10 - prints every character in alphabet.
 * Return: void.
 */
void print_alphabet_x10(void)
{
	char n;
	int m;

	for (m = 0; m < 10; m++)
	{
		n = 'a';
		while (n <= 'z')
		{
			_putchar (n);
			n++;
		}
		_putchar('\n');


	}
}
