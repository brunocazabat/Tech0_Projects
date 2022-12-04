/*
** EPITECH PROJECT, 2017
** my_print_revalpha.c
** File description:
**
*/

int	my_print_revalpha (void)
{	
	int	nb = 122;
	
	while (nb >= 97){
		my_putchar(nb);
		nb--;
	}
	return (0);
}
