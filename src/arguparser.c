#include "../include/arguparser.h"

t_flaglist	get_flag_list()
{
  t_flaglist	result;

  result.mandat_flags = 0;
  result.option_flags = 0;
  result.all_flags = NULL;
  return (result);
}

t_flag		*register_flag(t_flaglist list, char *name, int val_type, int mandatory)
{
  t_flag	*result;

  (void)list;
  result = malloc(sizeof(t_flag));
  if (result == NULL)
    return (NULL);
  result->mandat = mandatory;
  result->next_arg = NULL;
  result->value = malloc(sizeof(t_argvalue));
  if (result->value == NULL)
    {
      free(result);
      return (NULL);
    }
  result->value->type = val_type;
  result->default_value = malloc(sizeof(t_argvalue));
  if (result->default_value == NULL)
    {
      free(result->value);
      free(result);
      return (NULL);
    }
  result->default_value->type = val_type;
  str_cpy(result->key, name, MAX_KEY_LENGTH);
  /*TODO add to list*/
  return (result);
}

int	parse(t_flaglist list, int argc, char **argv)
{
  if (list.mandat_flags == 0 && list.option_flags == 0)
    {
      return (TRUE);
    }
  if (argc == 2 && (equals(argv[1], "-h") || equals(argv[1], "-?")))
    {
      /*TODO help*/
      return (TRUE);
    }
  return (FALSE);
}
