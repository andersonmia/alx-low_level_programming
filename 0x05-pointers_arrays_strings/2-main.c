#include "main.h"
#include <stdio.h>

/**
 * main - check the code for main.h School students.
 *
 * Return: Always 0
 */
int main(void)
{
	char *str;
	int len;

	str = "main.h!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
