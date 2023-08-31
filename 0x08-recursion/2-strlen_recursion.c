#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s - string whose length is to be found
 *
 * return: integer value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
