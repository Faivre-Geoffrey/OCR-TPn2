#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "fonctions.c"

int main()
{

	char motSecret[40] = "";
	char motTrouver[40] = "";
	char maLettre;
	int life = 10;
	int i = 0;


	graphiqueEnter();
	countAndChooseWord(motSecret, &i);
	rmvEnter(motSecret);
	makeMotTrouver(motSecret, motTrouver);

	i += 1;


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
		printf("\n\nGame over ^^       \n\nsecretword is %s\n", motSecret);
	}
}

