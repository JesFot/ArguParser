#ifndef	LSTRINGS_H_
# define	LSTRINGS_H_

#include "global.h"

int	check_length(char *str, int expected);
int	equals(char *str, char *expected);
int	contains(char *str, char *ends);

void	str_cpy(char dest[], char *src, int limit);

#endif	/* !LSTRINGS_H_ */
