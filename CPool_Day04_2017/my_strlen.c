/*
** EPITECH PROJECT, 2017
** my_putstring.c
** File description:
** 
*/

int	my_strlen(char const *str) {

	int	x = 0;
	
	while (str[x] != '\0') {
		x = x + 1;
	}
	return (x);
}
