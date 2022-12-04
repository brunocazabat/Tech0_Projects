/*
** EPITECH PROJECT, 2017
** my_print_digits.c
** File description:
**
*/

int	my_print_digits (void)
{	
	int	nb = 48;
	
	while (nb <= 57){
		my_putchar(nb);
		nb++;
	}
	return (0);
}
