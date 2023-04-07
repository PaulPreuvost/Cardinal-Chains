#include <stdio.h>
#include <stdlib.h>

//NIVEAU 20
//Taille du plateau
const int size_x = 3;
const int size_y = 3;

//Valeur du plateau
int grid[3][3] = {
        {7, 5, 4},
        {6, 5, 4},
        {6, 5, 0},
};

//Nombres de cases
int cases_restantes1 = 0;
int cases_restantes2 = 0;
int cases_restantes3 = 0;
int cases_restantes4 = 2;
int cases_restantes5 = 3;
int cases_restantes6 = 2;
int cases_restantes7 = 1;
int cases_restantes8 = 0;

//Position du initiale du joueur
int x = 2;
int y = 2;