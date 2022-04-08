#include <stdio.h>

/**
 * prints the alphabet in lowercase
 * followed by a new line
 * excluding q and e
 * Return: 0 always
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}							
		ch++;
	}	
	putchar('\n');
	return (0);
}
