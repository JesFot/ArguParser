#include "../../include/lstrings.h"

int	check_length(char *str, int expected)
{
  int	it;

  it = 0;
  while (str[it] != '\0')
    {
      if (it > expected)
	{
	  return (0);
	}
      it += 1;
    }
  return (it == expected);
}

int	equals(char *str, char *expected)
{
  int	it;

  it = 0;
  while (str[it] != '\0' || expected[it] != '\0')
    {
      if (str[it] == '\0' || expected[it] == '\0')
	{
	  return (0);
	}
      it += 1;
    }
  return (1);
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
	    return (1);
	}
      it += 1;
    }
  return (0);
}

int	starts_with(char *str, char *starts)
{
  int	it;

  it = 0;
  while (str[it] != '\0' || starts[it] != '\0')
    {
      if (starts[it] == '\0')
	{
	  return (1);
	}
      else if (str[it] == '\0')
	{
	  return (0);
	}
      it += 1;
    }
  return (1);
}
