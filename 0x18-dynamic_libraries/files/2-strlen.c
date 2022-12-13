#include "main.h"

/**
* _strlen - calculate the length of a string s
* @s: a pointer to string whose length is calculates
* Return: the length osf the string s  success
*/
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);
}
