#include "main.h"

int _isupper(int c)
{
  /* uppercase ASCII characters range from 65-90 */
  int output;

  if (c >= 65 && c <=90)
  {
    output = 1;
  }
  else
  {
    output = 0;
  }

  return (output);
}
