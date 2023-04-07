#include <stdio.h>
#include <stdlib.h>

//NIVEAU 9
//Taille du plateau
const int size_x = 4;
const int size_y = 4;

//Valeur du plateau
int grid[4][4] = {
        {9, 9, 9, 5},
        {9, 2, 2, 4},
        {9, 2, 2, 3},
        {0, 1, 2, 2},
};

//Nombres de cases
int cases_restantes1 = 1;
int cases_restantes2 = 6;
int cases_restantes3 = 1;
int cases_restantes4 = 1;
int cases_restantes5 = 1;
int cases_restantes6 = 0;
int cases_restantes7 = 0;
int cases_restantes8 = 0;

//Position du initiale du joueur
int x = 3;
int y = 0;
