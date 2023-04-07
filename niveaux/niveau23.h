#include <stdio.h>
#include <stdlib.h>
//NIVEAU 23
//Taille du plateau
const int size_x = 4;
const int size_y = 4;

//Valeur du plateau
int grid[4][4] = {
        {8, 8, 8, 8},
        {8, 8, 8, 0},
        {8, 8, 8, 8},
        {8, 8, 8, 8},
};

//Nombres de cases
int cases_restantes1 = 0;
int cases_restantes2 = 0;
int cases_restantes3 = 0;
int cases_restantes4 = 0;
int cases_restantes5 = 0;
int cases_restantes6 = 0;
int cases_restantes7 = 0;
int cases_restantes8 = 15;

//Position du initiale du joueur
int x = 1;
int y = 3;