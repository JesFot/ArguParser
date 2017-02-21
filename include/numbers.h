#ifndef	NUMBERS_H_
# define	NUMBERS_H_

#include "global.h"

int	is_num(char c);
int	is_valid_nbr(char *str, int *index);
int	is_valid_float(char *str, int *index);
int	is_valid_signed(char *str, int *index);
int	is_valid_signedf(char *str, int *index);

int	is_svalid_nbr(char *str);
int	is_svalid_float(char *str);
int	is_svalid_signed(char *str);
int	is_svalid_signedf(char *str);

/* int	is_valid_size(char *str, int size); */

int		our_stoi(char *str, int *index);
unsigned long	our_stol(char *str, int *index);
double		our_stod(char *str, int *index);

#endif	/* !NUMBERS_H_ */

/**
 * @file numbers.h
 * @brief Toutes les fonctions en relation avec des nombres
 *
 * Ce fichier rescence toutes les fonctions qui sont reliés aux nombres dans cette lib
 * @see ../src/numbers/validation.c
 * @see ../src/numbers/validation_simple.c
 */
/**
 * @fn int is_valid_nbr(char *str, int *index)
 * @brief Vérifie si un entier naturel est valide
 *
 * Vérifie si le string donné contient un entier naturel à partir de 'index' jusqu'à la fin.
 *
 * @param str La chaine de caractère à vérifier
 * @param index L'index de départ
 */
/**
 * @fn int is_valid_float(char *str, int *index)
 * @brief Vérifie si un nombre réel positif est valide
 *
 * Vérifie si le string donné contient un réel positif à partir de 'index' jusqu'à la fin.
 *
 * @param str La chaine de caractère à vérifier
 * @param index L'index de départ
 */
/**
 * @fn int is_valid_signed(char *str, int *index)
 * @brief Vérifie si un nombre entier est valide
 *
 * Vérifie si le string donné contient un entier à partir de 'index' jusqu'à la fin.
 *
 * @param str La chaine de caractère à vérifier
 * @param index L'index de départ
 */
/**
 * @fn int is_valid_signedf(char *str, int *index)
 * @brief Vérifie si un nombre réel est valide
 *
 * Vérifie si le string donné contient un réel à partir de 'index' jusqu'à la fin.
 *
 * @param str La chaine de caractère à vérifier
 * @param index L'index de départ
 */
/**
 * @fn int is_svalid_nbr(char *str)
 * @brief Vérifie si un entier naturel est valide
 *
 * Vérifie si le string donné contient un entier naturel à partir du début jusqu'à la fin.
 *
 * @param str La chaine de caractère à vérifier
 */
/**
 * @fn int is_svalid_float(char *str)
 * @brief Vérifie si un réel positif est valide
 *
 * Vérifie si le string donné contient un réel positif à partir du début jusqu'à la fin.
 *
 * @param str La chaine de caractère à vérifier
 */
/**
 * @fn int is_svalid_signed(char *str)
 * @brief Vérifie si un entier est valide
 *
 * Check if the number is valid as signed from the beginning to the end
 *
 * @param str La chaine de caractère à vérifier
 */
/**
 * @fn int is_svalid_signedf(char *str)
 * @brief Vérifie si un réel est valide
 *
 * Vérifie si le string donné contient un réel à partir du début jusqu'à la fin.
 *
 * @param str La chaine de caractère à vérifier
 */
