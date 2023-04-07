#include <stdio.h>
#include <stdlib.h>

//NIVEAU 5
//Taille du plateau
const int size_x = 3;
const int size_y = 3;

//Valeur du plateau
int grid[3][3] = {
        {2, 1, 1},
        {2, 0, 1},
        {1, 1, 1},
};

//Nombres de cases
int cases_restantes1 = 6;
int cases_restantes2 = 2;
int cases_restantes3 = 0;
int cases_restantes4 = 0;
int cases_restantes5 = 0;
int cases_restantes6 = 0;
int cases_restantes7 = 0;
int cases_restantes8 = 0;

//Position du initiale du joueur
int x = 1;
int y = 1;
