/*
** EPITECH PROJECT, 2017
** my_show_word_array.c
** File description:
** display the content of an array
*/

#include <stdio.h>
#include <stdlib.h>

int	array_length(char * const *tab)
{
	int a = 0;

	while (tab[a] != NULL)
		a = a + 1;
	return (1);
}

int	my_show_word_array(char * const *tab)
{
	int i = 0;
	int j = array_length(tab);

	while (i <= j - 1) {
		my_putstr(tab[i]);
		i = i + 1;
		my_putchar('\n');
	}
	return (0);
}
