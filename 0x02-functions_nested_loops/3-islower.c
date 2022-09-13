#include "main.h"

/**
* _islower - check a character wheather its lowercase or not
* Description: return 1, if the character is lower, 0 if not
* @c: intiger argument
* Return: 0 (if not lower), 1 (if lower)
*/

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
