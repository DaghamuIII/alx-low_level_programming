#include "main.h"
/**
* _isalpha - checks wheather a given character is letter on alphabet or not
*
* Description: return 1 if alphabeticl letter and 0 otherwise
*
* Return: 1 (alphabetic letter) 0 (other wise)
*/
int _isalpha(int c)
{
	if ((c > 94 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
