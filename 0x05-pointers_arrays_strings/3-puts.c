#include "main.h"
/**
* _puts - write aa string s to stdout
* @str: the pointer to string to be written
* Return: (void)
*/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
