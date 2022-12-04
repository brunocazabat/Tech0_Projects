/*
** EPITECH PROJECT, 2017
** *my_evil_ltr.c
** File description:
** 
*/

char	*my_evil_str(char *string) {

	int	x;

	x = strlen (string) - 1;
	while (x != - 1) {
		x = x - 1;
	}
	return(string);
}
