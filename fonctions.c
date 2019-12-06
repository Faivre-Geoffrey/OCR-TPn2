#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void graphiqueEnter()
{
	printf("\n\n     **Welcome to the Hangman games**\n\n");
}

char lireCaractere()
{
	char caractere = 0;
	caractere = getchar();
	caractere = toupper(caractere);
	while (getchar() != '\n');
	return caractere;
}

int ft_FindAndReplace(char motSecret[],char motTrouver[], char maLettre)
{
	int i = 0;
	char motTrouverOrigin[100] = {0};
	strcpy(motTrouverOrigin, motTrouver);
	
	while(motSecret[i])
	{
		if(motSecret[i] == maLettre)
		{
			motTrouver[i] = maLettre;
		}
		i++;
	}
	if(strcmp(motTrouverOrigin, motTrouver) == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
