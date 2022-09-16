#include <main.h>

/**
* _isupper - checks if the character is uppercase
* @c: a carrier character which is checked
* Return: 1 (uppercase) 0 (not upper)
*
*/

int _isupper(int c)
{
	if (c >= 65 && <= 90)
		return (1);
	return (0);
}
