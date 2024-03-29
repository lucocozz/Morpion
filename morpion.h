#include <stdio.h>
#include <stdlib.h>
#include "conditions.c"
#include "display.c"
#include "jeu.c"

#ifdef _WIN32
#define CLRSCR "cls"
#elif __linux__
#define CLRSCR "clear"
#endif

void	name(char *P1, char *P2);
void	display_tab(char tab[3][3]);
void	init_tab(char tab[3][3]);
void	display_head(char *P1, char *P2, int V1, int V2);
int	check_case(char tab[3][3], int *pos);
void	select_case(int *pos);
int	test_win(char tab[3][3]);
int	check_egal(char tab[3][3], int win);

