/*
** EPITECH PROJECT, 2017
** concat_params.c
** File description:
** allocates memory and copies the string given as argument 
*/
char	length(int size, char **tab)
{
	int nb_char = 0;
	int x = 0;
	int y = 0;

	while (y < length) {
		x = 0;
		while (tab[y][x] != '\0') {
			nb_char = nb_char + 1;
			x = x + 1;
		}
		y = y + 1;
	}
	return (nb_char);
}

char	*concat_params(int argc, char **argv)
{
	int a = 0;
	int z = 0;
	int e = 0;
	int r = length(argc, argv);
	char *str = malloc(sizeof(char) * (r + 1 + 1 * argc));
	
	while (a < argc) {
		z = 0;
		while (argv[a][z] != '\0') {
			str[e] = argv [a][z];
			z = z + 1;
			e = e + 1;
		}
		a = a + 1;
		if(a < argc) {
			str[e] = '\n';
			e = e + 1;
		}
		else
			str[c] = '\0';
	}
	return(str);
}
