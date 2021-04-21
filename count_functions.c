/*
** EPITECH PROJECT, 2018
** count functions
** File description:
** my_sokoban
*/

#include "my.h"

int count_columns(char *map)
{
	int columns = 0;
	int i = 0;

	while (map[i] != '\n') {
		columns++;
		i++;
	}
	return(columns);
}

int get_largest_columns(char * map)
{
	int i = 0;
	int tmp = 0;
	int largest_column = 0;

	while (map[i] != '\0') {
		while (map[i] != '\n') {
			tmp++;
		}
		if (map[i] == '\n') {
			if (largest_column < tmp)
				largest_column = tmp;
			tmp = 0;
		}
		i++;
	}
	return (largest_column);
}

int get_largest_line(char *map)
{
	int i = 0;
	int tmp = 0;
	int number_lines = 0;

	while (map[i] != '\0') {
		if (map[i] == '\n')
			number_lines++;
		i++;
	}
	return (number_lines);
}

int check_player_pos(char *map)
{
	int player_pos = 0;

	while (map[player_pos] != 'P')
		player_pos++;
	return (player_pos);
}

int get_objective_nbr(char *map)
{
	int i = 0;
	int o_counter = 0;

	while (map[i] != '\0') {
		if (map[i] == 'O')
			o_counter++;
		i++;
	}
	return (o_counter);
}
