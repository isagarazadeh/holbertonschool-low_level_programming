#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int n;
	int m;
	for (n = 0; n < 10; n++)
	{
		putchar((n % 16) + '0');
	}
	for (m = 'a'; m <= 'f'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
