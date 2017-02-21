#include "../../include/numbers.h"

int	our_stoi(char *str, int *index)
{
  int	result;
  int	is_neg;

  is_neg = 1;
  result = 0;
  while (str[*index] == '-')
   {
      is_neg *= -1;
      *index += 1;
   }
  while (is_num(str[*index]))
    {
      result *= 10;
      result += (str[*index] - '0');
      *index += 1;
    }
  return (result * is_neg);
}

unsigned long	our_stol(char *str, int *index)
{
  long		result;
  int		is_neg;

  is_neg = 1;
  result = 0;
  while (str[*index] == '-')
   {
      is_neg *= -1;
      *index += 1;
   }
  while (is_num(str[*index]))
    {
      result *= 10;
      result += (str[*index] - '0');
      *index += 1;
    }
  return (result * is_neg);
}

double		our_stod(char *str, int *index)
{
  double	result;
  double	tmp;

  result = 0;
  result += our_stol(str, index);
  if (str[*index] != '.' || !is_num(str[*index + 1]))
    {
      return (result);
    }
  *index += 1;
  tmp = our_stol(str, index);
  while (tmp >= 1)
    {
      tmp /= 10;
    }
  result += tmp;
  return (result);
}
