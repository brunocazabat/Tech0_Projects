/*
** EPITECH PROJECT, 2017
** my_strcpy.c
** File description:
** copy a string into another
*/
char	*my_strcpy(char *dest, char const *src)
{
	int a = 0;

	while (src[a] != '\0') {
		dest[a] = src[a];
		a += 1;
	}
	return(dest);
}
