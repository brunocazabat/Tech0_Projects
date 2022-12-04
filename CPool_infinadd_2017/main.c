/*
** EPITECH PROJECT, 2017
** infin_add
** File description:
** infinadd
*/

#include <stdlib.h>
#include <stdio.h>
#include "include/my.h"

char	*infi_add(int ac, char **av)
{
	int c = my_strlen(av[1]);
	int d = my_strlen(av[2]);	
	int i = 0;
	int tmp = 0;
	char *a = malloc(sizeof(char) * (c + 1));
	char *b = malloc(sizeof(char) * (d + 1));
	char *res;

	a = my_revstr(av[1]);
	b = my_revstr(av[2]);

	if (c > d)
		res = malloc(sizeof(char) * (c + 1));
	else
		res = malloc(sizeof(char) * (d + 1));

	while (a[i] != '\0') {
		
		int tmp = (a[i] - 48) + b[i] + res[i];
		printf('%s', tmp);
		
		/*if (tmp < 57) {
			tmp = 
			tmp = res[i] - 10;
		}
		else {
			res[i] = (a[i] - 48) + b[i];
			tmp = res[i] - 10;
			res[i + 1] = 1;
			}*/
		i++;		
	}
	res[i] = '\0';
	my_revstr(res);
	return (res);
}

int	main(int argc, char **argv)
{
	my_putstr(infi_add(argc, argv));
	my_putchar('\n');
	return (0);
}
