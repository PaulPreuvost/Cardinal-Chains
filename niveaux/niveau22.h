#include <stdio.h>
#include <stdlib.h>

//NIVEAU 22
//Taille du plateau
const int size_x = 4;
const int size_y = 5;

//Valeur du plateau
int grid[4][5] = {
        {2, 2, 9, 2, 0},
        {2, 2, 2, 2, 2},
        {2, 3, 2, 2, 2},
        {2, 2, 9, 2, 2},
};

//Nombres de cases
int cases_restantes1 = 0;
int cases_restantes2 = 16;
int cases_restantes3 = 1;
int cases_restantes4 = 0;
int cases_restantes5 = 0;
int cases_restantes6 = 0;
int cases_restantes7 = 0;
int cases_restantes8 = 0;

//Position du initiale du joueur
int x = 0;
int y = 4;