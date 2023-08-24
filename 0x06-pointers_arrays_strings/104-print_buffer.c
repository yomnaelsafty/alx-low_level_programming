#include "main.h"
#include <stdio.h>
/**
 * isPrintableASCII - determines if a printable ascii char
 * @n: integer
 * Return: 1 if true, 0 if false
*/
int isPrintableASCII(int n)
{
	return (n >= 32 && n <= 126);
}
/**
 * printHexes - */
