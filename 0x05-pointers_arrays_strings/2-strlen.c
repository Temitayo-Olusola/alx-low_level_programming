#include "main.h"

/**
 * _strlen - returns lenght of string
 * @s: string
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int len = 0;

	while(s[len] != '\0')
	{
		len++;
	}

	return (len);
}
