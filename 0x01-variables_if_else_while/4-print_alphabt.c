#include <stdio.h>
/**
 * main - random num
 * Return: 0
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
		i++;
	}

	putchar('\n');
	return (0);
}
