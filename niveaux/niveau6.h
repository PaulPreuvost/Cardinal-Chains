#include <stdio.h>
#include <stdlib.h>

//NIVEAU 6
//Taille du plateau
const int size_x = 4;
const int size_y = 3;

//Valeur du plateau
int grid[4][3] = {
        {1, 1, 3},
        {1, 0, 2},
        {1, 9, 1},
        {1, 1, 1},
};

//Nombres de cases
int cases_restantes1 = 8;
int cases_restantes2 = 1;
int cases_restantes3 = 1;
int cases_restantes4 = 0;
int cases_restantes5 = 0;
int cases_restantes6 = 0;
int cases_restantes7 = 0;
int cases_restantes8 = 0;

//Position du initiale du joueur
int x = 1;
int y = 1;
