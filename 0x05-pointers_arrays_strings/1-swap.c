#include "main.h"

/**
*swap_int - swaps integer values
*@a: first int
*@b: second int
*Return: returns nothing
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
