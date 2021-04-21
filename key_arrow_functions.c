/*
** EPITECH PROJECT, 2018
** deplacement
** File description:
** my_sokoban
*/

#include "my.h"

char *key_right(char *map)
{
	int p_pos = check_player_pos(map);
	int obj_pos = 0;

	if (map[p_pos + 1] == ' ' || map[p_pos + 1] == 'O') {
		map[p_pos] = ' ';
		map[p_pos + 1] = 'P';
	} else if (map[p_pos + 1] == 'X' && map[p_pos + 2] == ' ') {
		map[p_pos] = ' ';
		map[p_pos + 1] = 'P';
		map[p_pos + 2] = 'X';
	} else if (map[p_pos + 1] == 'X' && map[p_pos + 2] == 'O') {
		map[p_pos] = ' ';
		map[p_pos + 1] = 'P';
		map[p_pos + 2] = 'X';
		obj_pos = p_pos + 2;
	}
	return (map);
}

char *key_left (char *map)
{
	int p_pos = check_player_pos(map);
	int obj_pos = 0;

	if (map[p_pos - 1] == ' ' || map[p_pos - 1] == 'O') {
		map[p_pos] = ' ';
		map[p_pos - 1] = 'P';
	} else if (map[p_pos - 1] == 'X' && map[p_pos - 2] == ' ') {
		map[p_pos] = ' ';
		map[p_pos - 1] = 'P';
		map[p_pos - 2] = 'X';
	} else if ( map[p_pos - 1] == 'X' && map[p_pos -2] == 'O') {
		map[p_pos] = ' ';
		map[p_pos - 1] = 'P';
		map[p_pos - 2] = 'X';
		obj_pos = p_pos - 2;
	}
	return (map);
}

char *key_down (char *map)
{
	int p_pos = check_player_pos(map);
	int c_pos = count_columns(map);
	int obj_pos = 0;

	if (map[p_pos + c_pos + 1] == 'X' && map[p_pos + c_pos + c_pos + 2]
	    == ' ') {
		map[p_pos] = ' ';
		map[p_pos + c_pos + 1] = 'P';
		map[p_pos + c_pos + c_pos + 2] = 'X';
	} else if (map[p_pos + c_pos +1] == 'X' &&
		   map[p_pos + c_pos + c_pos + 2] == 'O') {
		map[p_pos] = ' ';
		map[p_pos + c_pos + 1] = 'P';
		map[p_pos + c_pos + c_pos + 2] = 'X';
		obj_pos = p_pos + c_pos + c_pos + 2;
	} else if (map[p_pos + c_pos + 1] == ' ' ||
		   map[p_pos + c_pos + 1] == 'O') {
		map[p_pos] = ' ';
		map[p_pos + c_pos + 1] = 'P';
	}
	return (map);
}

char *key_up(char *map)
{
	int p_pos = check_player_pos(map);
	int c_pos = count_columns(map);
	int obj_pos = 0;

	if (map[p_pos - c_pos - 1] == ' ' || map[p_pos - c_pos - 1] == 'O') {
		map[p_pos] = ' ';
		map[p_pos - c_pos - 1] = 'P';
	} else if (map[p_pos - c_pos - 1] == 'X' &&
		   map[p_pos - c_pos - c_pos - 2] == ' ') {
		map[p_pos] = ' ';
		map[p_pos - c_pos - 1] = 'P';
		map[p_pos - c_pos - c_pos - 2] = 'X';
	} else if (map[p_pos - c_pos - 1] == 'X' &&
		   map[p_pos - c_pos - c_pos - 2] == 'O') {
		map[p_pos] = ' ';
		map[p_pos - c_pos - 1] = 'P';
		map[p_pos - c_pos - c_pos - 2] = 'X';
		obj_pos = p_pos - c_pos - c_pos - 2;
	}
	return (map);
}
