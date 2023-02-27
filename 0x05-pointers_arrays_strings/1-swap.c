#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps to an integer value
 *
 * @a: pointer to the fisrt integer
 *
 * @b: pointer to the second integer
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
