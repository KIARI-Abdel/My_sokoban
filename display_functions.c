/*
** EPITECH PROJECT, 2018
** affichage
** File description:
** my_sokoban
*/

#include "my.h"

void call_functions(char *map)
{
	keypad(stdscr, TRUE);
	while(1) {
		mvprintw(0, 0, map);
		refresh;
		map = analise_event(map);
	}
}

char *analise_event(char *map)
{
	int ch;

	ch = getch();
	if(ch == KEY_UP) {
		map = key_up(map);
	} else if(ch == KEY_DOWN) {
		map = key_down(map);
	} else if(ch == KEY_LEFT) {
		map = key_left(map);
	} else if(ch == KEY_RIGHT) {
		map = key_right(map);
	}
	return (map);
}

char *display_map(char *map)
{
	int fd;
	char *buffer;
	int size = 0;

	buffer = malloc(sizeof(char *) * 30000);
	fd = open(map, O_RDONLY);
	read (fd, buffer, 1000);
	return (buffer);
}

int check_map(char *map)
{
	int i = 0;

	while (map[i] != '\0') {
		if (map[i] != ' ' && map[i] != 'X' && map[i] != 'P' && map[i]\
		    != '#' && map[i] != 'O' && map[i] != '\n' && map[i] != \
		    '\0') {
			my_putstr("Invalid map");
			return (84);
		}
		i++;
	}
}

void display_usage()
{
	my_putstr("\nUSAGE\n\t ./my_sokoban map\nDESCRIPTION\n\tmap file\
 representing the warehouse map, containing '#' for walls,\n\t    'P' for\
 the player, 'X' for boxes and 'O' for storage locations.\n");
}
