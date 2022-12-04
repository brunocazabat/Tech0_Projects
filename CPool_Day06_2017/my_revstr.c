/*
** EPITECH PROJECT, 2017
** my_revstr.c
** File description:
** reverse a string
*/
char	*my_revstr(char *str)
{
	int a = 0;
	int x;
	int c;
	
	while (str[x] != '\0') {
		x += 1; 
	}
        x = x - 1;

	while (x >= a) {
                c = str[a];
		str[x] = str[x];
		str[a] = c;
		a = a + 1;
		x = x - 1;
	}
	return (str);
}
