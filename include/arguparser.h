#ifndef	ARGUPARSER_H_
# define	ARGUPARSER_H_

#include "numbers.h"
#include "lstrings.h"

enum	e_mandatory
{
  MANDATORY,
  OPTIONAL,
  CONDITIONAL
};

enum	e_value_types
{
  CHAR,
  INT,
  LONG,
  DOUBLE,
  FLOAT,
  STRING,
  VOID
};

struct	s_multitypes
{
    char	v_char;
    int		v_int;
    long	v_long;
    double	v_double;
    float	v_float;
    char	*v_string;
};

#endif	/* !ARGUPARSER_H_ */
