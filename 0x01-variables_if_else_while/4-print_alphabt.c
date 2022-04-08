#include <stdio.h>

/**
 * prints the alphabet in lowercase
 * followed by a new line
 * excluding q and e
 * Return: 0 always
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch = 'z'; ch != 'q'; && ch != 'e', ch++)
		putchar (ch);
	putchar('\n');
	return (0);
}
