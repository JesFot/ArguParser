#include "../../include/lstrings.h"

void	str_cpy(char dest[], char *src, int limit)
{
  int	it;

  it = 0;
  while (it < (limit - 1) && src[it] != '\0')
    {
      dest[it] = src[it];
      it += 1;
    }
  dest[it] = '\0';
}
