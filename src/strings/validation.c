#include "../../include/lstrings.h"

int	check_length(char *str, int expected)
{
  int	it;

  it = 0;
  while (str[it] != '\0')
    {
      if (it > expected)
	{
	  return (FALSE);
	}
      it += 1;
    }
  return (it == expected ? TRUE : FALSE);
}

int	equals(char *str, char *expected)
{
  int	it;

  it = 0;
  while (str[it] != '\0' || expected[it] != '\0')
    {
      if (str[it] == '\0' || expected[it] == '\0')
	{
	  return (FALSE);
	}
      it += 1;
    }
  return (TRUE);
}

int	contains(char *str, char *ends)
{
  int	it;
  int	it2;

  it = 0;
  while (str[it] != '\0')
    {
      it2 = 0;
      if (str[it] == ends[it2])
	{
	  while (ends[it2] == str[it])
	    it2 += 1;
	  if (ends[it2] == '\0')
	    return (TRUE);
	}
      it += 1;
    }
  return (FALSE);
}

int	starts_with(char *str, char *starts)
{
  int	it;

  it = 0;
  while (str[it] != '\0' || starts[it] != '\0')
    {
      if (starts[it] == '\0')
	{
	  return (TRUE);
	}
      else if (str[it] == '\0')
	{
	  return (FALSE);
	}
      it += 1;
    }
  return (TRUE);
}
