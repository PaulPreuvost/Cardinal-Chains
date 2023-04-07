#include <stdio.h>
#include <stdlib.h>

//NIVEAU 17
//Taille du plateau
const int size_x = 4;
const int size_y = 3;

//Valeur du plateau
int grid[4][3] = {
        {0, 4, 9},
        {3, 3, 3},
        {3, 9, 3},
        {3, 3, 3},
};

//Nombres de cases
int cases_restantes1 = 0;
int cases_restantes2 = 0;
int cases_restantes3 = 8;
int cases_restantes4 = 1;
int cases_restantes5 = 0;
int cases_restantes6 = 0;
int cases_restantes7 = 0;
int cases_restantes8 = 0;

//Position du initiale du joueur
int x = 0;
int y = 0;