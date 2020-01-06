#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
void countAndChooseWord(char chaine[], int *i)
{
        int a = 0;
        int t = 0;
        FILE* fichier = NULL;
        int numMot = 0;
        srand(time(NULL));
        fichier = fopen("fichierDico", "r");

        if(fichier != NULL)
        {
                while(fgets(chaine, 40, fichier) != NULL)
                {
                        a++;
                }
                numMot = (rand() % (a - 0 + 1)) + 0;
                rewind(fichier);
                while(t < numMot)
                {
                        fgets(chaine, 40, fichier);
                        t++;
                }
                fclose(fichier);
                *i = a;
        }
        else
        {
                printf("deso le fichier ne s'ouvre pas");
        }
}

void makeMotTrouver(char *motSecret, char *motTrouver)
{
        int i = 0;
        int t = 0;
        while(motSecret[i])
        {
                i++;
        }
        while(t < i)
        {
                motTrouver[t] = '*';
                t++;
        }
        motTrouver[t] = '\0';
}

void rmvEnter(char *motSecret)
{
        int i = 0;
        while(motSecret[i])
        {
                if(motSecret[i] == '\n')
                {
                        motSecret[i] = '\0';
                        break;
                }
                i++;
        }
}


void graphiqueEnter()
{
	printf("\n\n     ********************************\n     ________________________________\n     **Welcome to the Hangman games**\n     ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯\n     ********************************\n");
}

char lireCaractere()
{
        char caractere = 0;
        caractere = getchar();
        caractere = toupper(caractere);
        while(getchar() != '\n');
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
