#include <stdio.h>
/**
 * main - entry point
 *
 * Descripitio: print all alphabet letters
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
