#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Succes)
 */

int main(void)
{

        char alphabet = 'a';

        while (alphabet <= 'z')
        {
	if(alphabet == 'q' || 'e')
	{
		break;
	}
        putchar(alphabet);
        alphabet++;
        }

        putchar('\n');
        return (0);
}
