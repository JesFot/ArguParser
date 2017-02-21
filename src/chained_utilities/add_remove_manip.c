#include "../../include/arguparser.h"

int			init_list(t_flaglist list, t_flag *flag)
{
  struct s_control	*ctrl;

  if (list.all_flags == NULL)
    {
      ctrl = malloc(sizeof(struct s_control));
      if (ctrl == NULL)
        return (FALSE);
      flag->prev_arg = NULL;
      flag->next_arg = NULL;
      ctrl->final_arg = flag;
      ctrl->first_arg = flag;
      flag->control_arg = ctrl;
      list.all_flags = flag;
      return (TRUE);
    }
  return (FALSE);
}

int		add_end(t_flaglist list, t_flag *flag)
{
  t_flag	*start;
  t_flag	*old_end;

  init_list(list, flag);
  start = list.all_flags;
  old_end = start->control_arg->final_arg;
  old_end->next_arg = flag;
  old_end->control_arg->final_arg = flag;
  flag->next_arg = NULL;
  flag->control_arg = start->control_arg;
  flag->prev_arg = old_end;
  return (TRUE);
}

int		remove_end(t_flaglist list)
{
  t_flag	*current;
  t_flag	*last;

  current = list.all_flags;
  if (current == NULL)
    return (FALSE);
  last = current->control_arg->final_arg;
  last->prev_arg->next_arg = NULL;
  current->control_arg->final_arg = last->prev_arg;
  free(last);
  return (TRUE);
}

int		destroy_list(t_flaglist list)
{
  t_flag	*current;

  current = list.all_flags;
  if (current == NULL)
    return (FALSE);
  free(current->control_arg);
  while (current->next_arg != NULL)
    {
      current = current->next_arg;
      free(current->prev_arg);
    }
  return (TRUE);
}
