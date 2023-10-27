#include "main.h"
/*
 * cap_string - check the code
 * @s: variable
 * Return: Always 0.
 * */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
		{
			if (i == 0 || s[i - 1] == '\t' || s[i - 1] == '\n')
			{
				s[i] = s[i] - 32;
			}
			else if (s[i - 1] == ' ' || s[i - 1] == ',' || s[i - 1] == '.')
			{
				s[i] = s[i] - 32;
			}
			else if (s[i - 1] == '"' || s[i - 1] == '(')
			{
				s[i] = s[i] - 32;
			}
			else if (s[i - 1] == ';' || s[i - 1] == '!' || s[i - 1] == '?')
			{
				s[i] = s[i] - 32;
			}
			else if (s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}')
			{
				s[i] = s[i] - 32;
			}
		}
		i++;
	}
	return (s);
}
