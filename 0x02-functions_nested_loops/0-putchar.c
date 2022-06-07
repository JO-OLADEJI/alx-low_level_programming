#include "main.h"

/**
 * main - entry function of program
 * 
 * Description: prints "_putchar" with a new line to the standard output
 * 
 * Return: 0 (success)
 */
int main(void)
{
  char output[] = { '_', 'p', 'u', 't', 'c', 'h', 'a', 'r' };
  int length = sizeof(output) / sizeof(output[0]), i;

  for (i = 0; i < length; i++)
  {
    _putchar(output[i]);
  }

  _putchar('\n');
  return (0);
}
