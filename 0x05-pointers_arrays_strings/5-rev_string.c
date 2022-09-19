#include "main.h"

/**
* rev_string - Reverses a string
* @s: a string to be reversed is carried in s
* Return: void
*/
void rev_string(char *s)
{
	int i, length, half;
	char temp;

	for (i = 0; i != '\0'; i++)
		;
	length = i;
	half = length / 2;
	i = 0;

	while (half--)
	{
		temp = s[length - i - 1];
		s[length - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
