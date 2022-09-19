#include "main.h"

/**
* swap_int - swap intergers stored in variables a and b
* @a: the pointer to first variable to be swapped
* @b: a pointer to second variables which will be swapped by a
* Return (0)
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
