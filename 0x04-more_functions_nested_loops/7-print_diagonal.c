#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Print diagonal line dependent on the integer n.
 * @n : The number of lines using '\' characters to use
 * Return: Void.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar("\n");
	}
	else
	{
		int i;
		int j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar("\\");
				else if (j < 1)
					_putchar('');
			}
			_putchar('\n');
		}
	}
}
