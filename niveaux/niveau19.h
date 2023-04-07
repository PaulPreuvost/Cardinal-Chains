#include <stdio.h>
#include <stdlib.h>

//NIVEAU 19
//Taille du plateau
const int size_x = 2;
const int size_y = 4;

//Valeur du plateau
int grid[2][4] = {
        {8, 7, 6, 0},
        {8, 7, 6,6},
};

//Nombres de cases
int cases_restantes1 = 0;
int cases_restantes2 = 0;
int cases_restantes3 = 0;
int cases_restantes4 = 0;
int cases_restantes5 = 0;
int cases_restantes6 = 3;
int cases_restantes7 = 2;
int cases_restantes8 = 2;

//Position du initiale du joueur
int x = 0;
int y = 3;