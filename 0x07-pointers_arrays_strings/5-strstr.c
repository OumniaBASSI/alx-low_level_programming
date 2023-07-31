#include "main.h"
#include <stddef.h>
/**
 * strstr - Entry Function
 * @haystack: char
 * @needle: char
 * Return: haystack or NULL (SUCCESS)
 */
char *strstr(char *haystacj, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] == haystack[i + j] && needle[j] != '\0'; j++)
			;
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
