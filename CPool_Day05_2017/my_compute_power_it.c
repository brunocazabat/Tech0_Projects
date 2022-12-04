/*
** EPITECH PROJECT, 2017
** my_compute_power_it.c
** File description:
** 
*/
int	my_compute_power_it(int nb, int p)
{
	int	g = nb;
	if (p == 0)
		return(1);
	if (p < 0)
		return(0);
	while (p > 1) {
		nb = nb * g;
		p = p - 1;
	}
	return(nb);
}
