/*
** EPITECH PROJECT, 2017
** my_putstring.c
** File description:
** ok
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     my_strlen(char const *str)
{
	int	x = 0;
	while (str[x] != '\0') {
		x = x + 1;
	}
	return (x);
}
