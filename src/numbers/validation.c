#include "../../include/numbers.h"

/**
 * @file validation.c
 * @brief Déclaration des fonctions de validation
 *
 * Déclaration des fonctions complètes de validation des nombres
 */

int	is_num(char c)
{
  if (c >= '0' && c <= '9')
    {
      return (1);
    }
  return (0);
}

int	is_valid_nbr(char *str, int *index)
{
  while (str[*index] != '\0')
    {
      if (str[*index] < '0' || str[*index] > '9')
	{
	  return (0);
	}
      *index += 1;
    }
  return (1);
}

int	is_valid_float(char *str, int *index)
{
  if (!is_valid_nbr(str, index))
    {
      return (0);
    }
  if (str[*index] != '.')
    {
      return (0);
    }
  *index += 1;
  return (is_valid_nbr(str, index));
}

int	is_valid_signed(char *str, int *index)
{
  if (str[*index] == '-')
    {
      *index += 1;
    }
  return (is_valid_nbr(str, index));
}

int	is_valid_signedf(char *str, int *index)
{
  if (str[*index] == '-')
    {
      *index += 1;
    }
  return (is_valid_float(str, index));
}
