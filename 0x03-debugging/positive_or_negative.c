#include "main.h"
/**
 * main - checks positive_or_negative functions
 * void positve_or_negative returns nothing
 * i - is less than 0 and declared as an integer
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else  if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
