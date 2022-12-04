/*
** EPITECH PROJECT, 2017
** my_putchar
** File description:
** test
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    my_putchar(char c)
{
	write(1, &c, 1);
}
