#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: pointer of the string to be printed
 * Return: Nothing
 */
void rev_string(char *s)
{
	int length, x, half;
	char mel;

	for (length = 0; s[length] != '0'; length++)
	;
       
	x = 0;
       	half = length / 2;
       
	while(half--)
       	{
		mel = s[length - x - 1];
		s[length - x - 1] = s[x];
		s[x] = mel;
		x++;
	 }
}
