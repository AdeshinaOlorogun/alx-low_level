#include "main.h"

/**
* swap.c - swaps values of int a and int b
*
* Return: Always 0 if success
*/

void swap_int(int *a, int *b)
{
		int s;

		s = *a;
		*a = *b;
		*b = s;
}
