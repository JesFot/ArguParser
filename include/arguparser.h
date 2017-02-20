#ifndef	ARGUPARSER_H_
# define	ARGUPARSER_H_

#include "numbers.h"
#include "lstrings.h"

# define	MAX_DESCRIPTION_LENGTH	(280)
# define	MAX_HELP_USAGE_LENGTH	(120)
# define	MAX_KEY_LENGTH		(30)

enum	e_mandatory
{
  MANDATORY,
  OPTIONAL,
  CONDITIONAL
};

enum	e_value_types
{
  TYPE_CHAR,
  TYPE_INT,
  TYPE_LONG,
  TYPE_DOUBLE,
  TYPE_FLOAT,
  TYPE_STRING
};

enum	e_flag_types
{
  FLAG_SWITCH,
  FLAG_VALUE
};

struct	s_argvalue
{
    int	type;
    union
    {
        char	v_char;
        int	v_int;
        long	v_long;
        double	v_double;
        float	v_float;
        char	*v_string;
    }	u_multitypes;
};

typedef	struct s_argvalue	t_argvalue;

struct		s_arg
{
    char	single;
    int		type;
    int		mandat;
    char	key[MAX_KEY_LENGTH];
    char	description[MAX_DESCRIPTION_LENGTH];
    t_argvalue	*value;
};

typedef	struct s_arg	t_flag;

struct		s_flaglist
{
    char	help_usage[MAX_HELP_USAGE_LENGTH];
    t_flag	*all_flags;
};

#endif	/* !ARGUPARSER_H_ */
