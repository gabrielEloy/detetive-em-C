#include <stdio.h>

void new_game(void);
int take_next_turn(void);
void send_suggestion(int character, int weapon, int room);
void send_accusation(int character, int weapon, int room);

char *get_player_input(void);
int get_player_data(void);
int get_player_position(int which);
void send_comp_turn(int which);
void get_eliminated(int type);