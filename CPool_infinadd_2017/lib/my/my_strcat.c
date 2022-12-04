/*
** EPITECH PROJECT, 2017
** my_strcat.c
** File description:
** concatenate two strings/mettre bout à bout deux chaînes
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*my_strcat(char *dest, char const *src)
{
	int dest_len  = my_strlen(dest); 
	int i = 0;

	while (src[i] != '\0') {
		dest[dest_len + i] = src[i];
		dest[dest_len + i] = '\0';
		i = i + 1;
	}
	return (dest);
}
