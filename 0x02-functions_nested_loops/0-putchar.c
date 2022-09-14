#include "main.h"
/**
 * main - prints the string "Function" from a character array.
 * Return: 0 on success.
 */
int main(void)
{
	char c[] = "functionsse";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
