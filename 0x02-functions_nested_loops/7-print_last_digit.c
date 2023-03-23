#include "main.h"

/**
* print_last_digit - print the last digit
* of an integer
*
* @n: input number as an integer
*
* Return : last digit
*/
int print_last_digit(int a)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
