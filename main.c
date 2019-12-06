#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "fonctions.c"


void countAndChooseWord(char chaine[], int *i)
{
	int t = 0;
	FILE* fichier = NULL;
	int numMot = 0;
	srand(time(NULL));
	fichier = fopen("test123", "r");

	if(fichier != NULL)
	{
		while(fgets(chaine, 40, fichier) != NULL)
		{
			*i++;
		}
		printf("%d\n", *i);
		numMot = (rand() % (*i - 0 + 1)) + 0;
		printf("%d",numMot);
		rewind(fichier);
		while(t < numMot)
		{
			fgets(chaine, 40, fichier);
			t++;
		}
		printf("%s", chaine);
		fclose(fichier);
	}
	else
	{
		printf("deso le fichier ne s'ouvre pas");
	}
}



int main()
{

	char motSecret[40] = "";
	char motTrouver[40] = "";
	char maLettre;
	int life = 10;
	int nombreDeLettre;
	char chaine[40] = {0};
	int i = 0;

	/*motSecret = malloc(nombreDeLettre * sizeof(char));*/

	graphiqueEnter();
	/*countAndChooseWord(chaine, &i);*/

	/*strcpy(motSecret, chaine);*/

	while(life > 0)
	{
		printf("\nmot secret = %s", motTrouver);
		printf("        lifecounter : %d\n\n", life);
		printf("tape une lettre : ");
		maLettre = lireCaractere();
		if(ft_FindAndReplace(motSecret, motTrouver, maLettre)==0)
			life--;
		if(strcmp(motSecret, motTrouver) == 0)
		{
			printf("GG u Win          The Word is %s\n", motTrouver);
			break;
		}
	}
	if(life == 0)
	{
		printf("Game over ^^       lifecounter = %d\n\n", life);
	}
}

