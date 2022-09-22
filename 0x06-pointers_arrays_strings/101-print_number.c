#include "main.h"

/**
* print_number - prints an int
*@n: int
*
*/

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)

		print_numb(num  / 10);

	_putchar((num % 10) + '0');
}
