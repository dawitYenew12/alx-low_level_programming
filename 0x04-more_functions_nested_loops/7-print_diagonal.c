#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Print diagonal line dependent on the integer n.
 * @n : The number of lines using '\' characters to use
 * Return: Void.
 */
void print_diagonal(int n)
{
	int i;
	int spaces;

	for (i = 0; i < n; i++)
	{
		for (spaces = 0; spaces < i; spaces++)
		{
			_putchat(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
