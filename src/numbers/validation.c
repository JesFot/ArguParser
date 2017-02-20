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
      return (TRUE);
    }
  return (FALSE);
}

int	is_valid_nbr(char *str, int *index)
{
  while (str[*index] != '\0')
    {
      if (str[*index] < '0' || str[*index] > '9')
	{
	  return (FALSE);
	}
      *index += 1;
    }
  return (TRUE);
}

int	is_valid_float(char *str, int *index)
{
  if (is_valid_nbr(str, index) == FALSE)
    {
      return (FALSE);
    }
  if (str[*index] != '.')
    {
      return (FALSE);
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
