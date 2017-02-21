#ifndef	ARGUPARSER_H_
# define	ARGUPARSER_H_

#include <stdlib.h>
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

enum	e_use_of_key
{
  ONLY_KEY,
  ONLY_SINGLE,
  KEY_AND_SINGLE
};

struct	s_argvalue
{
    int		type;
    char	name[MAX_DESCRIPTION_LENGTH];
    union
    {
        char	v_char;
        int	v_int;
        long	v_long;
        double	v_double;
        float	v_float;
        char	*v_string;
    }		value;
};

typedef	struct s_argvalue	t_argvalue;

struct			s_arg
{
    char		single;
    int			flag_type;
    int			mandat;
    int			use_of_key;
    char		key[MAX_KEY_LENGTH];
    char		description[MAX_DESCRIPTION_LENGTH];
    t_argvalue		*value;
    t_argvalue		*default_value;
    struct s_arg	*prev_arg;
    struct s_arg	*next_arg;
    struct s_control	*control_arg;
};

struct	s_control
{
    struct s_arg	*first_arg;
    struct s_arg	*final_arg;
};

typedef	struct s_arg	t_flag;

struct		s_flaglist
{
    char	help_usage[MAX_HELP_USAGE_LENGTH];
    int		mandat_flags;
    int		option_flags;
    t_flag	*all_flags;
};

typedef	struct	s_flaglist t_flaglist;

t_flaglist	get_flag_list();
t_flag		*register_flag(t_flaglist list, char *name, int val_type, int mandatory);
int		parse(t_flaglist list, int argc, char **argv);

#endif	/* !ARGUPARSER_H_ */
