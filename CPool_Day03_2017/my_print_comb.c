/*
** EPITECH PROJECT, 2017
** my_print_comb.c
** File description:
**
*/
#include <unistd.h>

void my_putchar(char a)
{
	write(1, &a, 1);
}

int	my_display(char a1, char z1, char e1)
{
	if (a1 == 55 && z1 == 56 && e1 == 57) {
		my_putchar (a1);
		my_putchar (z1);
		my_putchar (e1);
	}
	else {
		my_putchar(a1);
		my_putchar(z1);
		my_putchar(e1);
		my_putchar(',');
		my_putchar(' ');
	}
}

int	my_print_comb (void)
{
	char	a1 = 48;
	char	z1;
	char	e1;

	while (a1 <= 55) {
		z1 = a1 + 1;
		while (z1 <= 56) {
			e1 = z1 + 1;
			while (e1 <= 57) {
				my_display (a1, z1, e1);
				e1++;
			}
			z1++;
		}
		a1++;
	}
	return (0);
}

int main (void)
{
	my_print_comb();

	return (0);
}