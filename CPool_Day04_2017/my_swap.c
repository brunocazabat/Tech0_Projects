/*
** EPITECH PROJECT, 2017
** emacs my_swap.c
** File description:
** 
*/

void	my_swap ( int *a, int *b) {
	
	int	c = *a;
	
	*a = *b;
	*b = c;
}
