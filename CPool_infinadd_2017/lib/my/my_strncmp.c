/*
** EPITECH PROJECT, 2017
** my_strncmp.c
** File description:
** reproduce the behavior of the function strncmp
*/

int     my_strncmp(char const *s1, char const *s2, int n)
{
	if (s1 == s2)
    		return (0);
    	else
    		while (s1[n] == s2[n])
    			n = n - 1;
    	if (s1[n] < s2[n])
    		return (1);
    	else
    		return (-1);
}
