#include "main.h"
/**
 * _isdigit - Checks for a digit (0-9)
 * @c: Integer that holds the character
 *
 * Return: 1- Digit 0- Not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
