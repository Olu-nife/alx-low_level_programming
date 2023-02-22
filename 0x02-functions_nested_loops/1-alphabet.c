#include "main.h"
/**
 * main - check the code.
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Always 0..
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
	return (0);
}
