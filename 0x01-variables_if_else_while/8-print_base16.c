#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - prints the numbers of bash 16 in lowercase.
* Return: Always 0 (success)
*/
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
