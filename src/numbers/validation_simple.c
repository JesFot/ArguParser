#include "../../include/numbers.h"

/**
 * @file validation_simple.c
 * @brief Déclaration des fonctions de validation
 *
 * Déclaration des fonctions simplifiés de validation des nombres
 */

int	is_svalid_nbr(char *str)
{
  int	index;

  index = 0;
  return (is_valid_nbr(str, &index));
}

int	is_svalid_float(char *str)
{
  int	index;

  index = 0;
  return (is_valid_float(str, &index));
}

int	is_svalid_signed(char *str)
{
  int	index;

  index = 0;
  return (is_valid_signed(str, &index));
}

int	is_svalid_signedf(char *str)
{
  int	index;

  index = 0;
  return (is_valid_signedf(str, &index));
}
