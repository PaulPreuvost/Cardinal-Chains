#include <stdio.h>
#include <stdlib.h>

//NIVEAU 7
//Taille du plateau
const int size_x = 4;
const int size_y = 3;

//Valeur du plateau
int grid[4][3] = {
        {9, 9, 0},
        {1, 1, 1},
        {1, 1, 1},
        {2, 2, 3},
};

//Nombres de cases
int cases_restantes1 = 6;
int cases_restantes2 = 2;
int cases_restantes3 = 1;
int cases_restantes4 = 0;
int cases_restantes5 = 0;
int cases_restantes6 = 0;
int cases_restantes7 = 0;
int cases_restantes8 = 0;

//Position du initiale du joueur
int x = 0;
int y = 2;
