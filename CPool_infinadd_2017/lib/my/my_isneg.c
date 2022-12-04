/*
** EPITECH PROJECT, 2017
** my_isneg.c
** File description:
**
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int     my_isneg(int nb)
{
	if (nb < 0)
		my_putchar('N');
	else
		my_putchar('P');
	return (0);
}
