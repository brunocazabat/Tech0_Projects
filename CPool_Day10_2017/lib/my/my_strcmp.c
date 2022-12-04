/*
** EPITECH PROJECT, 2017
** my_strcmp.c
** File description:
** reproduce the behavior of the function strcmp
*/
int     my_strcmp(char const *s1, char const *s2)
{
	int	x = 0;
	
	if (s1 == s2)
		return (0);
	else
		while (s1[x] == s2[x])
			x = x + 1;
	if (s1[x] < s2[x])
		return (1);
	else
		return (-1);
}
