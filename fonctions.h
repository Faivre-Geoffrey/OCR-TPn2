#ifndef FONCTIONS_H_INCLUDED
# define FONCTIONS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

void graphiqueEnter();
char lireCaractere();
int ft_FindAndReplace(char motSecret[],char motTrouver[], char maLettre);
void countAndChooseWord(char chaine[], int *i);
void makeMotTrouver(char *motSecret, char *motTrouver);
void rmvEnter(char *motSecret);

#endif
