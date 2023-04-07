#include <stdio.h>
#include <stdlib.h>

//Fonction principal du jeu
char direction;
void jeu() {
    do {
        // Demander au joueur de choisir une direction
        printf("Choisissez une direction (z,q,s,d) ou tapez une (h) touche pour quitter et tapez (r) pour relancer : ");
        scanf(" %c", &direction);
        switch (direction) {
            case 'z':
                verif_Possible_Top();
                break;
            case 'q':
                verif_Possible_Left();
                break;
            case 's':
                verif_Possible_Bot();
                break;
            case 'd':
                verif_Possible_Right();
                break;
            case 'r':
                //remettre les positions à Zéros
            case 'h':
                break;
            default:
                printf("Mauvaise touche\n");
        }
        afficher_Grille();
        affiche_Case();
    } while (!verif_Victory() && direction != 'h');
    // Afficher un message de fin de jeu
    printf("Bravo, vous avez gagne !\n");
}