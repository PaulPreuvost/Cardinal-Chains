#include <stdio.h>
#include <stdlib.h>
#include "niveaux/niveau1.h"
#include "require/affichage.h"
#include "require/verif.h"
#include "require/jeu.h"

int main() {
    afficher_Grille();
    affiche_Case();
    jeu();
    return 0;
}