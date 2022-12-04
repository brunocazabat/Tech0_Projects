/*
** EPITECH PROJECT, 2017
** my_putstring.c
** File description:
** ok
*/

int     my_putstr(char const *str)
{
	int	x = 0;
	while (str[x] != '\0') {
		my_putchar(str[x]);
		x = x + 1;
	}
	return (0);
}
