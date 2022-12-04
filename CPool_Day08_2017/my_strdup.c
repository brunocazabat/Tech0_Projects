/*
** EPITECH PROJECT, 2017
** my_strdup.c
** File description:
** allocates memory and copies the string given as argument
*/

char	*my_strdup(char const *src)
{
	int i = 0;
	char *str;
	int z = my_strlen(src);
	
	str = malloc(sizeof(char) * (z + 1));
	while (i < z) {
		str[i] = src[i];
		i = i + 1;
	}
	str[i] = '\0';
	my_putstr(str);
	return(str);
}
