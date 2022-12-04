/*
** EPITECH PROJECT, 2017
** my_compute_power_rec.c
** File description:
** ok
*/

int     my_compute_power_rec(int nb, int p)
{
	int	h = nb;
	if (p == 0)
		return(1);
	if (p < 0)
		return(0);
	p = p - 1;
        h = my_compute_power_rec(h ,p) * nb;
	return(h);
}
