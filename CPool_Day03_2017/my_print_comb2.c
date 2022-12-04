 /*
** EPITECH PROJECT, 2017
** my_print_comb2.c
** File description:
**
*/
#include <unistd.h>

void my_putchar(char a)
{
	write(1, &a, 1);
}


int	my_2display(char a1, char z1, char e1, char r1)
{
	if (a1 == 57 && z1 == 56 && e1 == 57 && r1 == 57) {
		my_putchar (a1);
		my_putchar (z1);
		my_putchar (' ');
		my_putchar (e1);
		my_putchar (r1);
		my_putchar (',');
		my_putchar (' ');
	}
	else {
		my_putchar(a1);
		my_putchar(z1);
		my_putchar(' ');
		my_putchar(e1);
		my_putchar(r1);
		my_putchar(',');
		my_putchar(' ');
	}
}

int	my_print_comb2_2(char a1, char z1, char e1, char r1)
{
	while (a1 <= 57) {
		while (z1 <= 57) {
			while (e1 <= 57) {
				while (r1 <= 57) {
					my_2display (a1, z1, e1, r1);
					r1++;
				}
				e1++;
				r1 = 48;
			}
			z1++;
			e1 = a1;
			r1 = z1 +1;
		}
		a1++;
		z1 = 48;
		e1 = a1;
		r1 = 49;		
	}
	return (0);
}

int	my_print_comb2 (void)
{
	char	a1 = 48;
	char	z1 = 48;
	char	e1 = 48;
	char	r1 = 48;

	my_print_comb2_2 (a1, z1, e1, r1);
}


int main (void)
{
	my_print_comb2();

	return (0);
}
