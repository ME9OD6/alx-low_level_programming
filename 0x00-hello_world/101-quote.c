#include <unistd.h>
/**
 * main - Print with escape quotes
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, strl, 59);
	return (1);
}
