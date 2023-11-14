#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string1.
 * @s2: string2.
 * Return: pointer or NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int i, s1_len, s2_len;
	char *s3;

	if (s1 == NULL)
		s1_len = 0;
	else
		s1_len = strlen(s1);
	if (s2 == NULL)
		s2_len = 0;
	else
		s2_len = strlen(s2);
	s3 = malloc(s1_len + s2_len + 1);
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i < s1_len + s2_len; i++)
	{
		if (i < s1_len)
			s3[i] = s1[i];
		else
			s3[i] = s2[i - s1_len];
	}
	s3[i] = '\0';
	return (s3);
}
