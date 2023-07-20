#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Print numbers between zero to fourteen.
 *
 * Return: Void.
 */
void more_numbers(void)
{
	int i;
	int x;

	for (x = 0; x < 10; x++)
	{
		i = 0;
		while (i <= 14)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
				_putchar(i % 10 + '0');
			i++;
		}
	_putchar('\n');
	}
}
