#include "main.h"
/**
* _isalpha - checks wheather a given character is letter on alphabet or not
*@c: character of char type
* Description: return 1 if alphabeticl letter and 0 otherwise
*
* Return: 1 (alphabetic letter) 0 (other wise)
*/
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
