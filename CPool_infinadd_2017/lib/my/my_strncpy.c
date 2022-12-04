/*
** EPITECH PROJECT, 2017
** my_strcpy.c
** File description:
** copy a string into another with an 'n' parameter
*/
char	*my_strncpy(char *dest, char const *src, int n)
{
	    int i = 0;
    
	    while (i != n) {
	    	dest[i] = src[i];
	    	i += 1;
	    	my_putchar(dest[i]);
	}
}
