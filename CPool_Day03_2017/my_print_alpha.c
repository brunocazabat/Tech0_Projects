/*
** EPITECH PROJECT, 2017
** my_print_alpha.c
** File description:
**
*/

int	my_print_alpha (void)
{	
	int	nb = 97;
	while (nb <= 122) {
		my_putchar(nb);
		nb++;
	}
	return (0);
}
