#include"main.h"
/**
 * _isalpha(int c) - checks for lowercase character.
 * @c:  char.
 * Return: void.
 */
int _isalpha(int c)
{
        if ((c > 64 && c < 91) || (c > 96 && c < 123))
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
