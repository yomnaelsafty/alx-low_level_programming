#include "main.h"
/**
 * *_strpbrk -  searches a string for any of a set of bytes.
 * @s:string
 * @accept: string to search
 * Return: Always 0 (success)
*/
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accepr[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}
