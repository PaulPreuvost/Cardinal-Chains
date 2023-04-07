#include <stdio.h>
#include <stdlib.h>

//NIVEAU 12
//Taille du plateau
const int size_x = 6;
const int size_y = 6;

//Valeur du plateau
int grid[6][6] = {
        {9, 9, 9, 9, 0, 9},
        {1, 1, 1, 1, 1, 9},
        {1, 1, 1, 1, 2, 3},
        {1, 1, 9, 9, 9, 9},
        {1, 1, 1, 1, 1, 9},
        {1, 1, 1, 1, 1, 9},
};

//Nombres de cases
int cases_restantes1 = 21;
int cases_restantes2 = 1;
int cases_restantes3 = 1;
int cases_restantes4 = 0;
int cases_restantes5 = 0;
int cases_restantes6 = 0;
int cases_restantes7 = 0;
int cases_restantes8 = 0;

//Position du initiale du joueur
int x = 0;
int y = 4;