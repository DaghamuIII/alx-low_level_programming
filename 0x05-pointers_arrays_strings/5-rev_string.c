#include "main.h"

/**
* rev_string - Reverses a string
* @s: a string to be reversed is carried in s
* Return: void
*/
void rev_string(char *s)
{
	int i, length, c;
	char h;

	for (i = 0; i != '\0'; i++)
		;
	length = i;

	for (i--, c = 0; c < length / 2; i--, c++)
	{
		h = s[c];
		s[c] = s[i];
		s[i] = h;
	}
}
