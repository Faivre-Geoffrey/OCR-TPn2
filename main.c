#include "fonctions.h"

void ft_retry(int *retry, int *life)
{
	int caractere = 0;
	printf("voulez vous recommancer ?");
    caractere = getchar();
    caractere -= '0';
    while(getchar() != '\n');
	*retry = caractere;
	*life = 10;
}

int main()
{

	char motSecret[40] = "";
	char motTrouver[40] = "";
	char maLettre = '\0';
	int life = 10;
	int i = 0;
	int retry = 1;

	while(retry == 1)
	{
	maLettre = '\0';
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
		/*printf("-------\n");
		printf("%c\n", maLettre);*/
		if(ft_FindAndReplace(motSecret, motTrouver, maLettre)==0)
			life--;
		if(strcmp(motSecret, motTrouver) == 0)
		{
			printf("GG u Win          The Word is %s\n", motTrouver);
			ft_retry(&retry, &life);
			break;
		}
	}
	if(life == 0)
	{
		printf("\n\nGame over ^^       \n\nsecretword is %s\n", motSecret);
		ft_retry(&retry, &life);
	}
	}
}

