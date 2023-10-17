#include"main.h"
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
