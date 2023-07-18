#include <stdio.h>
/**
* main - Print all single numbers of base 10 from 0.
* Return: Always 0 (success)
*/
int main(void)
{
	int n = 0;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
