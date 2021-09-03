#include <stdio.h>

#include <string.h>

#include <conio.h>

#include <stdlib.h>

int main()

{

    printf("\t\t\tFrench verb conjugater\t\t\n");

    printf("\t\t\'Every french students companiion\'\n");
    
    printf("\t\t\t\t-Carson Rodrigues\n\n");    
    
    char inverb[10];

    char verbs[600][20] = { "apprendre", "prendre", "finir", "accepter", "adorer", "aimer",

        "annuler", "apporter", "attraper", " bavarder", "casser", "chanter", "chercher",

        "commander", "commencer", "couper", "danser", "demander", "dessiner", "detester", "donner",

        "ecouter", "emprunter", "enlever", "étudier", "exprimer", "fermer", "gagner", "garder",

        "gouter", "habiter", "jouer", "laver", "montrer", "oublier", "parler", "penser", "porter",

        "comprendre", "preter", "refuser", "regarder", "rencontrer", "rester", "rever", "saluer",

        "sauter", "sembler", "skier", "telephoner", "tomber", "travailler", "trouver", "utiliser",

        "visiter", "voler", "accomplir", " avertir", " batir", "benir", "choisir", "embellir",

        "envahir", "etablir", "etourdir", "grandir", "grossir", "guerir", "maigrir", "nourrir",

        "obeir", "punir", "reflechir", " remplir", "reunir", "reflechir", "reussir", "rougir",

        "vieillir", "attendre", "defendre", "dependre", "descendre", "entendre", "fendre", "fondre",

        "pendre", "perdre", "pondre", "pretendre", "rendre", "repandre", "repondre", "tendre",

        "vendre" };

    char engverbs[600][20] = { "learn", "take", "finish", "accept", "adore", "love", "cancel",

        "bring", "catch", "chat", "break", "sing", "seek", "order", "begin", "cut", "dance", "seek",

        "design", "hating", "give", "listen", "borrow", "remove", "consider", "express", "close",

        "win", "keep", "taste", "live", "play", "wash", "show", "forgetting", "talk", "think",

        "bear", "understand", "lend", "reject", "look", "meet", "stay", "dream", "welcome", "jump",

        "seem", "skiing", "telephoning", "falling", "working", "finding", "using", "visiting",

        "flying", "accomplishing", "warning", "building", "benir", "choose", "beautify", "invade",

        "establish", "stun", "grow", " be fat", "cure", "lose weight", "feed", "obey", "punish",

        "ponder", "fill", "reunite", "reflect", "succeed", "blush", "grow old", "wait", "defend",

        "depend", "descend", "hear", "split", "melt", "hang", "lose", "lay", "pretend", "make",

        "SPREAD", "answer", "soft", "sell" };

    char er[8][4] = { "e", "es", "e", "e", "ons", "ez", "ent", "ent" };

    char ir[8][7] = { "is", "is", "it", "it", "issons", "issez", "issent", "issent" };

    char re[8][5] = { "s", "s", "\0", "\0", "ons", "ez", "ent", "ent" };

    char subject[8][8] = { "Je", "Tu", "Il", "Elle", "Nous", "Vous", "Ils", "Elles" };

    char ftv[8][7] = { "vais", "vas", "va", "va", "allons", "allez", "vont", "vont" };

    char pr[8][10] = { "viens", "viens", "vient", "vient", "venons", "venez", "viennent", "viennent" };

    char ais[8][6] = { "ais", "ais", "ait", "ait", "ions", "iez", "aient", "aient" };

    char fut[8][6] = { "ai", "as", "a", "a", "ons", "ez", "ont", "ont" };

    char temp[30],infiniti[30],imp[30],impm[30],infi[30],yes[5];
    
	int ch, length, len, i, j;
		
    do

    {

        if (ch == 1)
        
        {

            system("cls");

        }
        
        fflush(stdin);
        
		printf("Enter the verb to be conjugated\n");
        
		gets(inverb);
        
		system("cls");

        strcpy(temp, inverb);

        strcpy(infiniti, inverb);

        length = strlen(inverb);

        inverb[length - 1] = '\0';

        length = strlen(inverb);

        inverb[length - 1] = '\0';
        
        const size_t N = sizeof(verbs) / sizeof(*verbs);

        size_t z = 0;


        while (z < N && !(strcmp(verbs[z], temp) == 0))
        	
            z++;



        if (z != N)

        {

            printf("Yes the verb you searched is in the database\n");

            printf("%s => to %s\n", temp, engverbs[z]);

            for (i = 0; i < 8; i++)

            {

                if (i == 4)

                {

                    strcpy(temp, inverb);

                    strcat(temp, er[i]);

                    strcpy(imp, temp);

                    length = strlen(imp);

                    imp[length - 1] = '\0';

                    length = strlen(imp);

                    imp[length - 1] = '\0';

                    length = strlen(imp);

                    imp[length - 1] = '\0';

                    strcpy(impm, imp);

                }

            }

            strcpy(temp, infiniti);

            if (temp[strlen(temp) - 2] == 'e' && temp[strlen(temp) - 1] == 'r')

            {

                printf("Subject  Present\t\tFutur Proche\n");

                for (i = 0; i < 8; i++)

                {

                    strcpy(temp, inverb);

                    strcat(temp, er[i]);

                    for (j = 0; j < 5; j++)

                    {

                        printf("%c", subject[i][j]);

                    }

                    printf("\t%s", temp);

                    printf("\t\t");

                    printf("|");

                    for (j = 0; j < 6; j++)

                    {

                        printf("%c", ftv[i][j]);

                    }

                    printf(" %s", infiniti);

                    printf("\n");

                }

                printf("\n");

                printf("Passe recent \t\t Imparfait\n");

                for (i = 0; i < 8; i++)

                {

                    for (j = 0; j < 8; j++)

                    {

                        printf("%c", pr[i][j]);

                    }

                    printf(" de ");

                    printf("%s ", infiniti);

                    printf("|");

                    strcat(impm, ais[i]);

                    printf("\t");

                    printf("%s", impm);

                    printf("\t");

                    strcpy(impm, imp);

                    printf("\n");

                }

                printf("\n");

                printf("Le futur \t\t Conditional\n");

                for (i = 0; i < 8; i++)

                {

                    strcpy(infi, infiniti);

                    strcat(infi, fut[i]);

                    printf("%s", infi);

                    printf("\t|");

                    strcpy(infi, infiniti);

                    strcat(infi, ais[i]);

                    printf("\t");

                    printf("%s", infi);

                    printf("\t");

                    printf("\n");

                }

            }

            if (temp[strlen(temp) - 2] == 'i' && temp[strlen(temp) - 1] == 'r')

            {

                printf("Subject \t Present\n");

                for (i = 0; i < 8; i++)

                {

                    strcpy(temp, inverb);

                    strcat(temp, ir[i]);

                    for (j = 0; j < 5; j++)

                    {

                        printf("%c", subject[i][j]);

                    }

                    printf(" \t%s", temp);

                    printf("\t");

                    printf("|");

                    for (j = 0; j < 6; j++)

                    {

                        printf("%c", ftv[i][j]);

                    }

                    printf(" %s", infiniti);

                    printf("\n");

                }

                printf("\n");

                printf("Passe recent \t\t Imparfait\n");

                for (i = 0; i < 8; i++)

                {

                    for (j = 0; j < 8; j++)

                    {

                        printf("%c", pr[i][j]);

                    }

                    printf(" de ");

                    printf("%s ", infiniti);

                    printf("|");

                    strcat(impm, ais[i]);

                    printf("\t");

                    printf("%s", impm);

                    printf("\t");

                    strcpy(impm, imp);

                    printf("\n");

                }

                printf("\n");

                printf("Le futur \t\t Conditional\n");

                for (i = 0; i < 8; i++)

                {

                    strcpy(infi, infiniti);

                    strcat(infi, fut[i]);

                    printf("%s", infi);

                    printf("\t|");

                    strcpy(infi, infiniti);

                    strcat(infi, ais[i]);

                    printf("\t");

                    printf("%s", infi);

                    printf("\t");

                    printf("\n");

                }

            }

            if (temp[strlen(temp) - 2] == 'r' && temp[strlen(temp) - 1] == 'e')

            {

                printf("Subject \t Present\n");

                for (i = 0; i < 8; i++)

                {

                    strcpy(temp, inverb);

                    strcat(temp, re[i]);

                    for (j = 0; j < 5; j++)

                    {

                        printf("%c", subject[i][j]);

                    }

                    printf(" \t%s", temp);

                    printf("\t");

                    printf("|");

                    for (j = 0; j < 6; j++)

                    {

                        printf("%c", ftv[i][j]);

                    }

                    printf(" %s", infiniti);

                    printf("\n");

                }

                printf("\n");

                printf("Passe recent \t\t Imparfait\n");

                for (i = 0; i < 8; i++)

                {

                    for (j = 0; j < 8; j++)

                    {

                        printf("%c", pr[i][j]);

                    }

                    printf(" de ");

                    printf("%s ", infiniti);

                    printf("|");

                    strcat(impm, ais[i]);

                    printf("\t");

                    printf("%s", impm);

                    printf("\t");

                    strcpy(impm, imp);

                    printf("\n");

                }

                printf("\n");

                printf("Le futur \t\t Conditional\n");

                for (i = 0; i < 8; i++)

                {
                
                    strcpy(infi, infiniti);
 
                 	length = strlen(infi);

                    infi[length - 1] = '\0';

                    strcat(infi, fut[i]);

                    printf("%s", infi);

                    printf("\t|");

                    strcpy(infi, infiniti);
                    
                    length = strlen(infi);

                    infi[length - 1] = '\0';
                    
                    strcat(infi, ais[i]);

                    printf("\t");

                    printf("%s", infi);

                    printf("\t");

                    printf("\n");

                }

            }

        }else

        {

            printf("Sorry, the verb you searched is not in the database\n\n");

            printf("Check if the spelling is right.\n");

            printf("Make sure to keep all letters in lower case\n\n");
            printf("Press y:To see the database\nPress enter to move forward\n");
            gets(yes);
            
            if(strcmp(yes,"y")==0){
            
			for(i=0;i<N;i++)
            
			{
            
			printf("%s ",verbs[i]);
            
			}
            
			}
            
        }
        printf("\nTo continue:press 1\nTo exit:press 0\n");

        scanf("%d", &ch);

    } while (ch == 1);

    return 0;
}