/*
** EPITECH PROJECT, 2017
** my_compute_factorial_it.c
** File description:
** ok
*/
int	my_compute_factorial_it(int nb)
{
	int	res = nb;
	if ( nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 1) {
		res = res * (nb - 1);
		nb = nb - 1;
	}
	return (res);
}
