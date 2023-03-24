#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Print numbers between 0 to 14 incl.
 *
 * Return: Void.
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (j <= 14)
		{
			if (j >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
			i++;
		}
		_putchat('\n');
	}
}
