/*
** EPITECH PROJECT, 2018
** main
** File description:
** my_sokoban
*/

#include "my.h"

int main(int ac, char **av)
{
	char *buffer_map;
	char *map;

	if (av[1][0] == '-' && av[1][1] == 'h') {
		display_usage();
		return (0);
	}  else {
		buffer_map = display_map(av[1]);
		check_map(buffer_map);
		}
	initscr();
        if (ac > 0) {
	        map = display_map(av[1]);
	        call_functions(map);
        } else
		my_putstr("Invalid number of arguments");
	endwin();
	return (0);
}
