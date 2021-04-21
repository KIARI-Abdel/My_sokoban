/*
** EPITECH PROJECT, 2018
** fonction basique
** File description:
** my_sokoban
*/

#include "my.h"

void my_putchar(char c)
{
	write(1, &c, 1);
}

void my_putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		my_putchar(str[i]);
		i++;
	}
}

char *tmpmap_space(char *map, char *tmp)
{
	int i = 0;

	while (tmp[i] != '\0') {
		map[i] = tmp[i];
		i++;
	}
	return (map);
}
