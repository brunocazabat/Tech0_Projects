/*
** EPITECH PROJECT, 2017
** my_isneg.c
** File description:
**
*/

int	my_isneg (int nb)
{
	if (nb < 0)
		my_putchar ('N');
	else
		my_putchar ('P');
	return (0);
}
