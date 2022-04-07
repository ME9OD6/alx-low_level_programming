#include <stdio.h>


/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

printf("The size of char is %d\n", sizeof(a));
printf("The size of integer is %d\n", sizeof(b));
printf("The size of long int is %d\n", sizeof(c));
printf("The size of long long int is %d\n", sizeof(d));
printf("The size of float is %d\n", sizeof(e));
return (0);
}
