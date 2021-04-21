/*
** EPITECH PROJECT, 2017
**
** File description:
**
*/

#ifndef MY_H
#define MY_h

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ncurses.h>
void my_putchar(char);
void my_putstr(char *);
int count_columns(char *);
int get_largest_columns(char *);
int get_largest_line(char *);
int check_player_pos(char *);
int get_objective_nbr(char *);
char *analise_event(char *);
void call_functions(char *);
char *display_map(char *);
int check_map(char *);
void display_usage();
char *key_right(char *);
char *key_left(char *);
char *key_down(char *);
char *key_up(char *);
char *get_O_pos(char *);
char *display_O(char *);

#endif
