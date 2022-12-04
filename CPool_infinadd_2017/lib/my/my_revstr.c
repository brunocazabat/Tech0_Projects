/*
** EPITECH PROJECT, 2017
** revstr
** File description:
** revstr
*/

char	*my_revstr(char *str)
{
	int i = 0;
	int j = 0;
	char k;

	while (str[i] != '\0') {
		i = i + 1;
	}
	i = i - 1;
	while (j <= i) {
		k = str[i];
		str[i] = str[j];
		str[j] = k;
		j = j + 1;
		i = i - 1;
	}
	return (str);
}
