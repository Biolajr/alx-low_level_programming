#include <stdio>

/**
 * main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchr(c);
	for (c = 'A'; c <= 'z'; c++)
		putchar(c);
	putchar("\n");
	return (0);
}
