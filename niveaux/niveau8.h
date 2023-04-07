#include <stdio.h>
#include <stdlib.h>

//NIVEAU 8
//Taille du plateau
const int size_x = 4;
const int size_y = 3;

//Valeur du plateau
int grid[4][3] = {
        {3, 9, 0},
        {3, 2, 1},
        {3, 2, 2},
        {3, 2, 2},
};

//Nombres de cases
int cases_restantes1 = 1;
int cases_restantes2 = 5;
int cases_restantes3 = 4;
int cases_restantes4 = 0;
int cases_restantes5 = 0;
int cases_restantes6 = 0;
int cases_restantes7 = 0;
int cases_restantes8 = 0;

//Position du initiale du joueur
int x = 0;
int y = 2;
