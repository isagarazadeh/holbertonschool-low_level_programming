#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *@s: char.
 * Return: len.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
