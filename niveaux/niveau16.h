#include <stdio.h>
#include <stdlib.h>

//NIVEAU 16
//Taille du plateau
const int size_x = 3;
const int size_y = 3;

//Valeur du plateau
int grid[3][3] = {
        {2, 2, 2},
        {3, 1, 1},
        {3, 1, 0},
};

//Nombres de cases
int cases_restantes1 = 3;
int cases_restantes2 = 3;
int cases_restantes3 = 2;
int cases_restantes4 = 0;
int cases_restantes5 = 0;
int cases_restantes6 = 0;
int cases_restantes7 = 0;
int cases_restantes8 = 0;

//Position du initiale du joueur
int x = 2;
int y = 2;