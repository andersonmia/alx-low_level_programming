#include "main.h"
#include <stdio.h>

/**
 * main - check the code for main.h School students.
 *
 * Return: Always 0.
 */
int main(void)
{
  char s[] = "main.h School!\n";
  char *p;

  p = string_toupper(s);
  printf("%s", p);
  printf("%s", s);
  return (0);
}
